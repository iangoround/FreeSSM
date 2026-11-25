/*
 * J2534_API.cpp - API for accessing SAE-J2534 compliant interfaces
 *
 * Copyright (C) 2009-2010 Comer352l
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "J2534_API.h"
#include "tinyxml2/tinyxml2.h"



J2534_API::J2534_API()
{
	_J2534LIB = NULL;
	_api_version = J2534_API_version::v0404;
	_PassThruOpen = NULL;
	_PassThruClose = NULL;
	_PassThruConnect_0202 = NULL;
	_PassThruConnect_0404 = NULL;
	_PassThruDisconnect = NULL;
	_PassThruReadVersion_0202 = NULL;
	_PassThruReadVersion_0404 = NULL;
	_PassThruGetLastError = NULL;
	_PassThruReadMsgs = NULL;
	_PassThruStartMsgFilter = NULL;
	_PassThruStopMsgFilter = NULL;
	_PassThruWriteMsgs = NULL;
	_PassThruStartPeriodicMsg = NULL;
	_PassThruStopPeriodicMsg = NULL;
	_PassThruIoctl = NULL;
	_PassThruSetProgrammingVoltage_0202 = NULL;
	_PassThruSetProgrammingVoltage_0404 = NULL;
}


J2534_API::~J2534_API()
{
	if (_J2534LIB)
	{
#ifdef __J2534_API_DEBUG__
		if (!FreeLibrary( _J2534LIB ))
			std::cout << "J2534interface::~J2534interface(): FreeLibrary() failed with error " << GetLastError() << "\n";
#else
		FreeLibrary( _J2534LIB );
#endif
	}
}


bool J2534_API::selectLibrary(std::string libPath)
{
	if (!libPath.size()) return false;
	HINSTANCE newJ2534LIB = NULL;
	// LOAD_WITH_ALTERED_SEARCH_PATH makes Windows search the DLL's own directory
	// for dependencies (needed by the Tactrix op20pt32.dll and many other J2534
	// drivers, which keep helper DLLs beside the main library). It requires a
	// fully qualified path, so keep the plain loader for relative paths.
	const bool isAbsolutePath = ((libPath.size() >= 2) && (libPath.at(1) == ':')) ||
	                            ((libPath.size() >= 2) && (libPath.at(0) == '\\') && (libPath.at(1) == '\\'));
	if (isAbsolutePath)
		newJ2534LIB = LoadLibraryExA( libPath.c_str(), NULL, LOAD_WITH_ALTERED_SEARCH_PATH );
	else
		newJ2534LIB = LoadLibraryA( libPath.c_str() );
	if (newJ2534LIB)
	{
		// Check if library is a valid J2534-library:
		if (!GetProcAddress( newJ2534LIB, "PassThruConnect" ) || !GetProcAddress( newJ2534LIB, "PassThruDisconnect" ))
		{
#ifdef __J2534_API_DEBUG__
			std::cout << "J2534interface::selectLibrary(): Error: the library doesn't provide the PassThruConnect(), and/or PassThruDisconnect() methods !\n";
			if (!FreeLibrary( newJ2534LIB ))
				std::cout << "J2534interface::selectLibrary(): FreeLibrary() failed with error " << GetLastError() << "\n";
#else
			FreeLibrary( newJ2534LIB );
#endif
			return false;
		}
		// Check API-version of the library:
		if (!GetProcAddress( newJ2534LIB, "PassThruOpen" ) || !GetProcAddress( newJ2534LIB, "PassThruClose" ))
			_api_version = J2534_API_version::v0202;
		else
			_api_version = J2534_API_version::v0404;
		// Close old library:
		if (_J2534LIB)
		{
#ifdef __J2534_API_DEBUG__
			if (!FreeLibrary( _J2534LIB ))
				std::cout << "J2534interface::selectLibrary(): FreeLibrary() failed with error " << GetLastError() << "\n";
#else
			FreeLibrary( _J2534LIB );
#endif
		}
		// Save data:
		_J2534LIB = newJ2534LIB;
		_lib_path = libPath;
		assignJ2534fcns();
	}
#ifdef __J2534_API_DEBUG__
	else
	{
		std::cout << "J2534interface::selectLibrary(): LoadLibraryEx()/LoadLibraryA() failed with error " << GetLastError() << "\n";
		std::cout << "  (a 32-bit J2534 DLL such as op20pt32.dll requires a 32-bit FreeSSM build)\n";
	}
#endif
	return newJ2534LIB;
}


std::string J2534_API::library()
{
	if (_J2534LIB)
		return _lib_path;
	else
		return "";
}


J2534_API_version J2534_API::libraryAPIversion()
{
	return _api_version;
}


void J2534_API::assignJ2534fcns()
{
	_PassThruOpen = reinterpret_cast< J2534_PassThruOpen >( GetProcAddress( _J2534LIB, "PassThruOpen" ) );
	_PassThruClose = reinterpret_cast< J2534_PassThruClose >( GetProcAddress( _J2534LIB, "PassThruClose" ) );
	if (_api_version == J2534_API_version::v0202)
	{
		_PassThruConnect_0202 = reinterpret_cast< J2534_PassThruConnect_0202 >( GetProcAddress( _J2534LIB, "PassThruConnect" ) );
		_PassThruReadVersion_0202 = reinterpret_cast< J2534_PassThruReadVersion_0202 >( GetProcAddress( _J2534LIB, "PassThruReadVersion" ) );
		_PassThruSetProgrammingVoltage_0202 = reinterpret_cast< J2534_PassThruSetProgrammingVoltage_0202 >( GetProcAddress( _J2534LIB, "PassThruSetProgrammingVoltage" ) );
		_PassThruConnect_0404 = NULL;
		_PassThruReadVersion_0404 = NULL;
		_PassThruSetProgrammingVoltage_0404 = NULL;
	}
	else
	{
		_PassThruConnect_0202 = NULL;
		_PassThruReadVersion_0202 = NULL;
		_PassThruSetProgrammingVoltage_0202 = NULL;
		_PassThruConnect_0404 = reinterpret_cast< J2534_PassThruConnect_0404 >( GetProcAddress( _J2534LIB, "PassThruConnect" ) );
		_PassThruReadVersion_0404 = reinterpret_cast< J2534_PassThruReadVersion_0404 >( GetProcAddress( _J2534LIB, "PassThruReadVersion" ) );
		_PassThruSetProgrammingVoltage_0404 = reinterpret_cast< J2534_PassThruSetProgrammingVoltage_0404 >( GetProcAddress( _J2534LIB, "PassThruSetProgrammingVoltage" ) );
	}
	_PassThruDisconnect = reinterpret_cast< J2534_PassThruDisconnect >( GetProcAddress( _J2534LIB, "PassThruDisconnect" ) );
	_PassThruGetLastError = reinterpret_cast< J2534_PassThruGetLastError >( GetProcAddress( _J2534LIB, "PassThruGetLastError" ) );
	_PassThruReadMsgs = reinterpret_cast< J2534_PassThruReadMsgs >( GetProcAddress( _J2534LIB, "PassThruReadMsgs" ) );
	_PassThruStartMsgFilter = reinterpret_cast< J2534_PassThruStartMsgFilter >( GetProcAddress( _J2534LIB, "PassThruStartMsgFilter" ) );
	_PassThruStopMsgFilter = reinterpret_cast< J2534_PassThruStopMsgFilter >( GetProcAddress( _J2534LIB, "PassThruStopMsgFilter" ) );
	_PassThruWriteMsgs = reinterpret_cast< J2534_PassThruWriteMsgs >( GetProcAddress( _J2534LIB, "PassThruWriteMsgs" ) );
	_PassThruStartPeriodicMsg = reinterpret_cast< J2534_PassThruStartPeriodicMsg >( GetProcAddress( _J2534LIB, "PassThruStartPeriodicMsg" ) );
	_PassThruStopPeriodicMsg = reinterpret_cast< J2534_PassThruStopPeriodicMsg >( GetProcAddress( _J2534LIB, "PassThruStopPeriodicMsg" ) );
	_PassThruIoctl = reinterpret_cast< J2534_PassThruIoctl >( GetProcAddress( _J2534LIB, "PassThruIoctl" ) );
}


std::vector<J2534Library> J2534_API::getAvailableJ2534Libs()
{
	std::vector<J2534Library> PTlibraries;
	HKEY hKey1, hKey2;
	DWORD index = 0;
	char KeyName[256] = "";
	long ret = 0;

	ret = RegOpenKeyExA(HKEY_LOCAL_MACHINE, ("Software"), 0, KEY_READ, &hKey1);
	if (ret == ERROR_SUCCESS)
	{
		// Search for keys "PassThruSupport", "PassThruSupport.04.04":
		while ((RegEnumKeyA(hKey1, index, KeyName, 256)) != ERROR_NO_MORE_ITEMS)
		{
			if (!strncmp(KeyName, "PassThruSupport", 15))
			{
				ret = RegOpenKeyExA(hKey1, KeyName, 0, KEY_READ, &hKey2);   // "PassThruSupportXXX"
				if (ret == ERROR_SUCCESS)   // "PassThruSupportXXX"
				{
					// Search for library data in all sub-keys (recursive)
					PTlibraries = searchLibValuesRecursive(hKey2, PTlibraries);
					ret = RegCloseKey(hKey2);
#ifdef __J2534_API_DEBUG__
					if (ret != ERROR_SUCCESS)
						std::cout << "J2534interface::getAvailableJ2534Libs():   RegCloseKey(hKey2) failed with error " << ret << "\n";
#endif
				}
#ifdef __J2534_API_DEBUG__
				else
					std::cout << "J2534interface::getAvailableJ2534Libs():   RegOpenKexEx(...) for key " << KeyName << " failed with error " << ret << "\n";
#endif
			}
			index++;
		}
		ret = RegCloseKey(hKey1);
#ifdef __J2534_API_DEBUG__
		if (ret != ERROR_SUCCESS)
			std::cout << "J2534interface::getAvailableJ2534Libs():   RegCloseKey(hKey1) failed with error " << ret << "\n";
#endif
	}
#ifdef __J2534_API_DEBUG__
	else
		std::cout << "J2534interface::getAvailableJ2534Libs():   RegOpenKeyEx(...) for 'HKEY_LOCAL_MACHINE\\Software' failed with error " << ret << "\n";
#endif
	// The registry is not always complete: some J2534 drivers (notably the
	// Tactrix OpenPort 2.0 driver) are installed without PassThruSupport keys.
	// Therefore also check the definitions file and well-known Tactrix paths.
	std::vector<J2534Library> additionalLibs;
	char exepath[MAX_PATH] = {0,};
	GetModuleFileNameA(NULL, exepath, MAX_PATH);
	std::string exedir(exepath);
	const size_t sep = exedir.find_last_of("\\/");
	if (sep != std::string::npos)
		exedir.erase(sep);
	else
		exedir.clear();
	const char* xmlpaths[] = { "definitions/J2534libs.xml", "J2534libs.xml" };
	for (unsigned int i=0; i<2; i++)
	{
		std::vector<J2534Library> xmlLibs = parseJ2534LibsXml(xmlpaths[i]);
		for (const J2534Library& lib : xmlLibs)
			additionalLibs.push_back(lib);
		if (!exedir.empty())
		{
			const std::string absPath = exedir + "\\" + xmlpaths[i];
			xmlLibs = parseJ2534LibsXml(absPath);
			for (const J2534Library& lib : xmlLibs)
				additionalLibs.push_back(lib);
		}
	}
	std::vector<J2534Library> tactrixLibs = findTactrixLibraries();
	for (const J2534Library& lib : tactrixLibs)
		additionalLibs.push_back(lib);
	for (const J2534Library& lib : additionalLibs)
		addLibraryUnique(PTlibraries, lib);
	// Remove duplicates (recursive registry scanning can add a library twice):
	std::vector<J2534Library> uniqueLibs;
	for (const J2534Library& lib : PTlibraries)
		addLibraryUnique(uniqueLibs, lib);
#ifdef __J2534_API_DEBUG__
	J2534misc::printLibraryInfo(uniqueLibs);
#endif
	return uniqueLibs;
}


std::vector<J2534Library> J2534_API::searchLibValuesRecursive(HKEY hKey, std::vector<J2534Library> PTlibs)
{
	HKEY hKey2;
	DWORD index = 0;
	char KeyName[256] = "";
	J2534Library PTlib;
	PTlib.api = J2534_API_version::v0404;
	char ValueName[256] = "";
	unsigned long szValueName = 256;// variable that specifies the size (in characters, including the terminating null char) of the buffer pointed to by the "ValueName" parameter.
	unsigned char Data[256] = "";	// buffer that receives the data for the value entry. This parameter can be NULL if the data is not required
	unsigned long szData = 256;	// variable that specifies the size, in bytes, of the buffer pointed to by the lpData parameter.
	long ret = 0;
	unsigned long ValueDataType = REG_NONE;
	// Check values :
	while ((RegEnumValueA(hKey, index, ValueName, &szValueName, NULL, &ValueDataType, Data, &szData)) != ERROR_NO_MORE_ITEMS)
	{
		if (ValueDataType == REG_SZ)
		{
			if (!strncmp(ValueName,"FunctionLibrary",15))
			{
				PTlib.path = (char*)(Data);
			}
			else if (!strncmp(ValueName,"Name",4))
			{
				PTlib.name = (char*)(Data);
			}
			else if (!strncmp(ValueName,"ProtocolsSupported",18))	// 02.02-API
			{
				PTlib.api = J2534_API_version::v0202;
				std::string protocol_str = (char*)(Data);
				// TODO split string, then use loop using existing parse function instead
				if (protocol_str.find("J1850VPW") != std::string::npos)
					PTlib.protocols = PTlib.protocols | J2534_protocol_flags::j1850vpw;
				if (protocol_str.find("J1850PWM") != std::string::npos)
					PTlib.protocols = PTlib.protocols | J2534_protocol_flags::j1850pwm;
				if (protocol_str.find("ISO9141") != std::string::npos)
					PTlib.protocols = PTlib.protocols | J2534_protocol_flags::iso9141;
				if (protocol_str.find("ISO14230") != std::string::npos)
					PTlib.protocols = PTlib.protocols | J2534_protocol_flags::iso14230;
				if (protocol_str.find("ISO15765") != std::string::npos)
					PTlib.protocols = PTlib.protocols | J2534_protocol_flags::iso15765;
				if (protocol_str.find("CAN") != std::string::npos)
					PTlib.protocols = PTlib.protocols | J2534_protocol_flags::can;
				if (protocol_str.find("SCI_A_ENGINE") != std::string::npos)
					PTlib.protocols = PTlib.protocols | J2534_protocol_flags::sci_a_engine;
				if (protocol_str.find("SCI_A_TRANS") != std::string::npos)
					PTlib.protocols = PTlib.protocols | J2534_protocol_flags::sci_a_trans;
				if (protocol_str.find("SCI_B_ENGINE") != std::string::npos)
					PTlib.protocols = PTlib.protocols | J2534_protocol_flags::sci_b_engine;
				if (protocol_str.find("SCI_B_TRANS") != std::string::npos)
					PTlib.protocols = PTlib.protocols | J2534_protocol_flags::sci_b_trans;
			}
		}
		else if (ValueDataType == REG_DWORD)	// 04.04-API
		{
			PTlib.api = J2534_API_version::v0404;
			DWORD key_value = (DWORD)(*Data);
			if (key_value)
			{
				std::string protocol_str = (char*)(ValueName);
				PTlib.protocols = PTlib.protocols | J2534misc::parseProtocol(protocol_str);
			}
		}
		szValueName = 256;	// because RegEnumValue has changed value !
		szData = 256;		// because RegEnumValue has changed value !
		index++;
	}
	if (PTlib.path.size() > 0)
		PTlibs.push_back( PTlib );
	// Check sub-keys:
	index = 0;
	while (RegEnumKeyA(hKey, index, KeyName, 256) != ERROR_NO_MORE_ITEMS)
	{
		ret = RegOpenKeyExA(hKey, KeyName, 0, KEY_READ, &hKey2);
		if (ret == ERROR_SUCCESS)
		{
			PTlibs = searchLibValuesRecursive(hKey2, PTlibs);
			ret = RegCloseKey(hKey2);
#ifdef __J2534_API_DEBUG__
			if (ret != ERROR_SUCCESS)
				std::cout << "J2534interface::searchLibValuesRecursive():   RegCloseKey(...) failed with error " << ret << "\n";
#endif
		}
#ifdef __J2534_API_DEBUG__
		else
		{
			std::cout << "J2534interface::getAvailableJ2534Libs():   RegOpenKexEx(...) for key " << KeyName << " failed with error " << ret << "\n";
		}
#endif
		index++;
	}
	return PTlibs;
}


// Read J2534-library definitions from an XML file (same schema as on Linux).
// This gives Windows users a way to add a J2534 DLL manually if it is neither
// registered nor installed in one of the standard Tactrix locations.
std::vector<J2534Library> J2534_API::parseJ2534LibsXml(const std::string& path)
{
	std::vector<J2534Library> PTlibraries;
	tinyxml2::XMLDocument xmldoc;
	if (xmldoc.LoadFile(path.c_str()) != tinyxml2::XML_SUCCESS)
		return PTlibraries;
	tinyxml2::XMLElement* rootelement = xmldoc.FirstChildElement("J2534LIBS");
	if (!rootelement)
		return PTlibraries;
	for (tinyxml2::XMLElement* libelement = rootelement->FirstChildElement("J2534LIB");
	     libelement; libelement = libelement->NextSiblingElement("J2534LIB"))
	{
		J2534Library lib;
		for (const tinyxml2::XMLAttribute* attrib = libelement->FirstAttribute();
		     attrib; attrib = attrib->Next())
		{
			const std::string attrname(attrib->Name());
			const std::string value(attrib->Value() ? attrib->Value() : "");
			if (attrname == "name")
				lib.name = value;
			else if (attrname == "path")
				lib.path = value;
			else if (attrname == "api")
			{
				lib.api = J2534misc::parseApiVersion(value);
				if (lib.api == J2534_API_version::undefined)
					lib.api = J2534_API_version::v0404;	// same fallback as the Linux parser
			}
		}
		tinyxml2::XMLElement* protocols = libelement->FirstChildElement("PROTOCOLS");
		if (protocols)
		{
			for (tinyxml2::XMLElement* p = protocols->FirstChildElement("PROTOCOL");
			     p; p = p->NextSiblingElement("PROTOCOL"))
			{
				if (p->GetText())
					lib.protocols = lib.protocols | J2534misc::parseProtocol(p->GetText());
			}
		}
		// Skip Linux-only entries (the shipped J2534libs.xml contains one);
		// they cannot be loaded on Windows and would only confuse the UI.
		if (lib.path.empty() || (lib.path.compare(0, 2, "./") == 0) ||
		    (lib.path.at(0) == '/') || (lib.path.find(".so") != std::string::npos))
			continue;
		PTlibraries.push_back(lib);
	}
	return PTlibraries;
}


static void findFileRecursive(const std::string& dir, const std::string& filename,
                              std::vector<std::string>& found, unsigned int depth)
{
	if ((depth > 5) || (found.size() >= 8))
		return;
	const std::string pattern = dir + "\\*";
	WIN32_FIND_DATAA fdata;
	HANDLE hFind = FindFirstFileA(pattern.c_str(), &fdata);
	if (hFind == INVALID_HANDLE_VALUE)
		return;
	do
	{
		const std::string name(fdata.cFileName);
		if ((name == ".") || (name == ".."))
			continue;
		const std::string fullpath = dir + "\\" + name;
		if (fdata.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
			findFileRecursive(fullpath, filename, found, depth + 1);
		else if (name == filename)
			found.push_back(fullpath);
	}
	while (FindNextFileA(hFind, &fdata));
	FindClose(hFind);
}


// Locate the 32-bit Tactrix J2534 DLL without relying on registry entries.
// The paths mirror the OpenECU/EcuFlash installations seen in the wild.
std::vector<J2534Library> J2534_API::findTactrixLibraries()
{
	std::vector<J2534Library> result;
	std::vector<std::string> foundPaths;
	const char* envvars[] = {"ProgramFiles(x86)", "ProgramFiles",
	                         "COMMONPROGRAMFILES(X86)", "COMMONPROGRAMFILES"};
	for (unsigned int e=0; e<4; e++)
	{
		char buf[MAX_PATH] = {0,};
		if (!GetEnvironmentVariableA(envvars[e], buf, MAX_PATH))
			continue;
		const std::string root(buf);
		const char* suffixes[] = {
			"\\OpenECU\\OpenPort 2.0\\drivers\\openport 2.0",
			"\\OpenECU\\EcuFlash\\drivers\\openport 2.0",
			"\\OpenECU\\drivers\\openport 2.0"
		};
		for (unsigned int s=0; s<3; s++)
			findFileRecursive(root + suffixes[s], "op20pt32.dll", foundPaths, 0);
		findFileRecursive(root + "\\OpenECU", "op20pt32.dll", foundPaths, 0);
	}
	// DriverStore copy (can be the only remaining copy after a driver update):
	WIN32_FIND_DATAA fdata;
	HANDLE hFind = FindFirstFileA("C:\\Windows\\System32\\DriverStore\\FileRepository\\openport2.inf_*", &fdata);
	if (hFind != INVALID_HANDLE_VALUE)
	{
		do
		{
			if (fdata.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
			{
				const std::string dll = std::string("C:\\Windows\\System32\\DriverStore\\FileRepository\\")
					+ fdata.cFileName + "\\op20pt32.dll";
				if (GetFileAttributesA(dll.c_str()) != INVALID_FILE_ATTRIBUTES)
					foundPaths.push_back(dll);
			}
		}
		while (FindNextFileA(hFind, &fdata));
		FindClose(hFind);
	}
	for (const std::string& path : foundPaths)
	{
		J2534Library lib;
		lib.path = path;
		lib.name = (path.find("DriverStore") != std::string::npos)
			? "Tactrix OpenPort 2.0 (J2534, DriverStore)"
			: "Tactrix OpenPort 2.0 (J2534)";
		lib.api = J2534_API_version::v0404;
		lib.protocols = J2534_protocol_flags::iso15765
			| J2534_protocol_flags::iso9141
			| J2534_protocol_flags::iso14230
			| J2534_protocol_flags::can;
		result.push_back(lib);
	}
	return result;
}


void J2534_API::addLibraryUnique(std::vector<J2534Library>& libs, const J2534Library& lib)
{
	if (lib.path.empty())
		return;
	for (const J2534Library& existing : libs)
	{
		if (lstrcmpiA(existing.path.c_str(), lib.path.c_str()) == 0)
			return;
	}
	libs.push_back(lib);
}


long J2534_API::PassThruOpen(void* pName, unsigned long *pDeviceID)	// 0404-API only
{
	if (!_J2534LIB) return J2534API_ERROR_INVALID_LIBRARY;
	if (!_PassThruOpen) return J2534API_ERROR_FCN_NOT_SUPPORTED;
	return _PassThruOpen(pName, pDeviceID);
}


long J2534_API::PassThruClose(unsigned long DeviceID)			// 0404-API only
{
	if (!_J2534LIB) return J2534API_ERROR_INVALID_LIBRARY;
	if (!_PassThruClose) return J2534API_ERROR_FCN_NOT_SUPPORTED;
	return _PassThruClose(DeviceID);
}


long J2534_API::PassThruConnect(unsigned long ProtocolID, unsigned long Flags, unsigned long *pChannelID)	// 0202-API
{
	if (!_J2534LIB) return J2534API_ERROR_INVALID_LIBRARY;
	if (!_PassThruConnect_0202) return J2534API_ERROR_FCN_NOT_SUPPORTED;
	return _PassThruConnect_0202(ProtocolID, Flags, pChannelID);
}


long J2534_API::PassThruConnect(unsigned long DeviceID, unsigned long ProtocolID, unsigned long Flags, unsigned long BaudRate, unsigned long *pChannelID)	// 0404-API
{
	if (!_J2534LIB) return J2534API_ERROR_INVALID_LIBRARY;
	if (!_PassThruConnect_0404) return J2534API_ERROR_FCN_NOT_SUPPORTED;
	return _PassThruConnect_0404(DeviceID, ProtocolID, Flags, BaudRate, pChannelID);
}


long J2534_API::PassThruDisconnect(unsigned long ChannelID)
{
	if (!_J2534LIB) return J2534API_ERROR_INVALID_LIBRARY;
	if (!_PassThruDisconnect) return J2534API_ERROR_FCN_NOT_SUPPORTED;
	return _PassThruDisconnect(ChannelID);
}


long J2534_API::PassThruReadVersion(char *pFirmwareVersion, char * pDllVersion, char *pApiVersion)	// 0202-API
{
	if (!_J2534LIB) return J2534API_ERROR_INVALID_LIBRARY;
	if (!_PassThruReadVersion_0202) return J2534API_ERROR_FCN_NOT_SUPPORTED;
	return _PassThruReadVersion_0202(pFirmwareVersion, pDllVersion, pApiVersion);
}


long J2534_API::PassThruReadVersion(unsigned long DeviceID, char *pFirmwareVersion, char * pDllVersion, char *pApiVersion)	// 0404-API
{
	if (!_J2534LIB) return J2534API_ERROR_INVALID_LIBRARY;
	if (!_PassThruReadVersion_0404) return J2534API_ERROR_FCN_NOT_SUPPORTED;
	return _PassThruReadVersion_0404(DeviceID, pFirmwareVersion, pDllVersion, pApiVersion);
}


long J2534_API::PassThruGetLastError(char *pErrorDescription)
{
	if (!_J2534LIB) return J2534API_ERROR_INVALID_LIBRARY;
	if (!_PassThruGetLastError) return J2534API_ERROR_FCN_NOT_SUPPORTED;
	return _PassThruGetLastError(pErrorDescription);
}


long J2534_API::PassThruReadMsgs(unsigned long ChannelID, PASSTHRU_MSG *pMsg, unsigned long *pNumMsgs, unsigned long Timeout)
{
	if (!_J2534LIB) return J2534API_ERROR_INVALID_LIBRARY;
	if (!_PassThruReadMsgs) return J2534API_ERROR_FCN_NOT_SUPPORTED;
	return _PassThruReadMsgs(ChannelID, pMsg, pNumMsgs, Timeout);
}


long J2534_API::PassThruStartMsgFilter(unsigned long ChannelID, unsigned long FilterType, PASSTHRU_MSG *pMaskMsg, PASSTHRU_MSG *pPatternMsg, PASSTHRU_MSG *pFlowControlMsg, unsigned long *pMsgID)
{
	if (!_J2534LIB) return J2534API_ERROR_INVALID_LIBRARY;
	if (!_PassThruStartMsgFilter) return J2534API_ERROR_FCN_NOT_SUPPORTED;
	return _PassThruStartMsgFilter(ChannelID, FilterType, pMaskMsg, pPatternMsg, pFlowControlMsg, pMsgID);
}


long J2534_API::PassThruStopMsgFilter(unsigned long ChannelID, unsigned long MsgID)
{
	if (!_J2534LIB) return J2534API_ERROR_INVALID_LIBRARY;
	if (!_PassThruStopMsgFilter) return J2534API_ERROR_FCN_NOT_SUPPORTED;
	return _PassThruStopMsgFilter(ChannelID, MsgID);
}


long J2534_API::PassThruWriteMsgs(unsigned long ChannelID, PASSTHRU_MSG *pMsg, unsigned long *pNumMsgs, unsigned long Timeout)
{
	if (!_J2534LIB) return J2534API_ERROR_INVALID_LIBRARY;
	if (!_PassThruWriteMsgs) return J2534API_ERROR_FCN_NOT_SUPPORTED;
	return _PassThruWriteMsgs(ChannelID, pMsg, pNumMsgs, Timeout);
}


long J2534_API::PassThruStartPeriodicMsg(unsigned long ChannelID, PASSTHRU_MSG *pMsg, unsigned long *pMsgID, unsigned long TimeInterval)
{
	if (!_J2534LIB) return J2534API_ERROR_INVALID_LIBRARY;
	if (!_PassThruStartPeriodicMsg) return J2534API_ERROR_FCN_NOT_SUPPORTED;
	return _PassThruStartPeriodicMsg(ChannelID, pMsg, pMsgID, TimeInterval);
}


long J2534_API::PassThruStopPeriodicMsg(unsigned long ChannelID, unsigned long MsgID)
{
	if (!_J2534LIB) return J2534API_ERROR_INVALID_LIBRARY;
	if (!_PassThruStopPeriodicMsg) return J2534API_ERROR_FCN_NOT_SUPPORTED;
	return _PassThruStopPeriodicMsg(ChannelID, MsgID);
}


long J2534_API::PassThruIoctl(unsigned long ChannelID, unsigned long IoctlID, void *pInput, void *pOutput)
{
	if (!_J2534LIB) return J2534API_ERROR_INVALID_LIBRARY;
	if (!_PassThruIoctl) return J2534API_ERROR_FCN_NOT_SUPPORTED;
	return _PassThruIoctl(ChannelID, IoctlID, pInput, pOutput);
}


long J2534_API::PassThruSetProgrammingVoltage(unsigned long PinNumber, unsigned long Voltage)	// 0202-API
{
	if (!_J2534LIB) return J2534API_ERROR_INVALID_LIBRARY;
	if (!_PassThruSetProgrammingVoltage_0202) return J2534API_ERROR_FCN_NOT_SUPPORTED;
	return _PassThruSetProgrammingVoltage_0202(PinNumber, Voltage);
}


long J2534_API::PassThruSetProgrammingVoltage(unsigned long DeviceID, unsigned long PinNumber, unsigned long Voltage)	// 0404-API
{
	if (!_J2534LIB) return J2534API_ERROR_INVALID_LIBRARY;
	if (!_PassThruSetProgrammingVoltage_0404) return J2534API_ERROR_FCN_NOT_SUPPORTED;
	return _PassThruSetProgrammingVoltage_0404(DeviceID, PinNumber, Voltage);
}
