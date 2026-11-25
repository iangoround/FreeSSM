#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

typedef void (__stdcall *GETDBTABLE)(unsigned int, void*, void*);

int main(int argc, char** argv)
{
	setvbuf(stdout, NULL, _IONBF, 0);
	if (argc < 3) { printf("usage: dbscan <dir> <id>\n"); return 1; }
	unsigned int id = (unsigned int)strtoul(argv[2], NULL, 16);
	char pattern[MAX_PATH];
	lstrcpyA(pattern, argv[1]); lstrcatA(pattern, "\\*.dll");
	WIN32_FIND_DATAA fd; HANDLE h = FindFirstFileA(pattern, &fd);
	if (h == INVALID_HANDLE_VALUE) { printf("no dlls\n"); return 2; }
	do
	{
		char path[MAX_PATH];
		lstrcpyA(path, argv[1]); lstrcatA(path, "\\"); lstrcatA(path, fd.cFileName);
		HMODULE m = LoadLibraryExA(path, NULL, LOAD_WITH_ALTERED_SEARCH_PATH);
		if (!m) continue;
		GETDBTABLE f = (GETDBTABLE)GetProcAddress(m, "GetDbTable");
		if (f)
		{
			void* ptr = NULL; unsigned int count = 0;
			f(id, &ptr, &count);
			if (ptr && count) printf("%-20s count=%u ptr=%p\n", fd.cFileName, count, ptr);
		}
		FreeLibrary(m);
	} while (FindNextFileA(h, &fd));
	FindClose(h);
	return 0;
}
