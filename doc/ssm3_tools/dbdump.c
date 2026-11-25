#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

typedef void (__stdcall *GETDBTABLE)(unsigned int, void*, void*);

static void hexdump(unsigned char* p, unsigned int n)
{
	for (unsigned int i = 0; i < n; ++i)
	{
		if (i % 16 == 0) printf("\n    %04X: ", i);
		printf("%02X ", p[i]);
	}
	printf("\n");
}

int main(int argc, char** argv)
{
	setvbuf(stdout, NULL, _IONBF, 0);
	if (argc < 3) { printf("usage: dbdump <dll> <id> [id...]\n"); return 1; }
	HMODULE h = LoadLibraryExA(argv[1], NULL, LOAD_WITH_ALTERED_SEARCH_PATH);
	if (!h) { printf("LoadLibrary failed %lu\n", GetLastError()); return 2; }
	GETDBTABLE f = (GETDBTABLE)GetProcAddress(h, "GetDbTable");
	if (!f) { printf("GetDbTable not found\n"); return 3; }
	for (int a = 2; a < argc; ++a)
	{
		unsigned int id = (unsigned int)strtoul(argv[a], NULL, 16);
		unsigned char* ptr = NULL; unsigned int count = 0;
		f(id, &ptr, &count);
		printf("id=%02X ptr=%p count=%u\n", id, (void*)ptr, count);
		if (ptr && count)
		{
			unsigned int show = count * 64; if (show > 512) show = 512;
			hexdump(ptr, show);
		}
	}
	FreeLibrary(h);
	return 0;
}
