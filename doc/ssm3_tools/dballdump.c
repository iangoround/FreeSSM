#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

typedef void (__stdcall *GETDBTABLE)(unsigned int, void*, void*);

int main(int argc, char** argv)
{
	setvbuf(stdout, NULL, _IONBF, 0);
	if (argc < 3) { printf("usage: dballdump <dll> <outdir>\n"); return 1; }
	HMODULE h = LoadLibraryExA(argv[1], NULL, LOAD_WITH_ALTERED_SEARCH_PATH);
	if (!h) { printf("LoadLibrary failed\n"); return 2; }
	GETDBTABLE f = (GETDBTABLE)GetProcAddress(h, "GetDbTable");
	if (!f) { printf("no GetDbTable\n"); return 3; }
	char base[MAX_PATH];
	lstrcpyA(base, argv[2]); lstrcatA(base, "\\"); lstrcatA(base, strrchr(argv[1], '\\') + 1);
	for (unsigned int id = 0; id <= 0x6f; ++id)
	{
		unsigned char* ptr = NULL; unsigned int count = 0;
		f(id, &ptr, &count);
		if (!ptr || !count) continue;
		unsigned int n = count * 256; if (n > 4 * 1024 * 1024) n = 4 * 1024 * 1024;
		char name[MAX_PATH];
		sprintf(name, "%s.%02X.bin", base, id);
		FILE* fp = fopen(name, "wb");
		if (!fp) continue;
		fwrite(ptr, 1, n, fp);
		fclose(fp);
		printf("%02X count=%u bytes=%u\n", id, count, n);
	}
	FreeLibrary(h);
	return 0;
}
