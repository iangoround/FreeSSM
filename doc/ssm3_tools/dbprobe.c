#include <windows.h>
#include <stdio.h>

typedef void (__stdcall *GETDBTABLE)(unsigned int, void*, void*);

int main(int argc, char** argv)
{
	setvbuf(stdout, NULL, _IONBF, 0);
	if (argc < 2) { printf("usage: dbprobe <dll>\n"); return 1; }
	HMODULE h = LoadLibraryExA(argv[1], NULL, LOAD_WITH_ALTERED_SEARCH_PATH);
	if (!h) { printf("LoadLibrary failed %lu\n", GetLastError()); return 2; }
	GETDBTABLE f = (GETDBTABLE)GetProcAddress(h, "GetDbTable");
	if (!f) { printf("GetDbTable not found\n"); return 3; }
	for (unsigned int id = 0; id <= 0x6f; ++id)
	{
		unsigned int a = 0xDEADBEEF, b = 0xCAFEBABE;
		f(id, &a, &b);
		if (a != 0xDEADBEEF || b != 0xCAFEBABE)
			printf("id=%02X a=%08X b=%08X\n", id, a, b);
	}
	FreeLibrary(h);
	return 0;
}
