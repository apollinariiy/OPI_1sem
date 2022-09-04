//ГлушеняПолинаАндреевна2004
//c3 eb f3 f8 e5 ed ff cf ee eb e8 ed e0 c0 ed e4 f0 e5 e5 e2 ed e0 32 30 30 34
//d0 93 d0 bb d1 83 d1 88 d0 b5 d0 bd d1 8f d0 9f d0 be d0 bb d0 b8 d0 bd d0 b0 d0 90 d0 bd d0 b4 d1 80 d0 b5 d0 b5 d0 b2 d0 bd d0 b0 32 30 30 34
//13 04 3b 04 43 04 48 04 35 04 3d 04 4f 04 1f 04 3e 04 3b 04 38 04 3d 04 30 04 10 04 3d 04 34 04 40 04 35 04 35 04 32 04 3d 04 30 04 32 00 30 00 30 00 34 00
//GlushenyaPolinaAndreevna2004
// 47 6c 75 73 68 65 6e 79 61 50 6f 6c 69 6e 61 41 6e 64 72 65 65 76 6e 61 32 30 30 34
// 47 6c 75 73 68 65 6e 79 61 50 6f 6c 69 6e 61 41 6e 64 72 65 65 76 6e 61 32 30 30 34
// 47 00 6c 00 75 00 73 00 68 00 65 00 6e 00 79 00 61 00 50 00 6f 00 6c 00 69 00 6e 00 61 00 41 00 6e 00 64 00 72 00 65 00 65 00 76 00 6e 00 61 00 32 00 30 00 30 00 34 00
//PolinaГлушеня2004
//50 6f 6c 69 6e 61 c3 eb f3 f8 e5 ed ff 32 30 30 34
//50 6f 6c 69 6e 61 d0 93 d0 bb d1 83 d1 88 d0 b5 d0 bd d1 8f 32 30 30 34
//50 00 6f 00 6c 00 69 00 6e 00 61 00 13 04 3b 04 43 04 48 04 35 04 3d 04 4f 04 32 00 30 00 30 00 34 00
#include <iostream>

int main()
{
	setlocale(LC_CTYPE, "Russian");

	int number = 0x12345678;
	char hello[] = "Hello, ";
	char lfie[] = "ГлушеняПолинаАндреевна2004";
	char rfie[] = "GlushenyaPolinaAndreevna2004";
	char lr[] = "PolinaГлушеня2004";

	wchar_t Lfie[] = L"ГлушеняПолинаАндреевна2004";
	wchar_t Rfie[] = L"GlushenyaPolinaAndreevna2004";
	wchar_t LR[] = L"PolinaГлушеня2004";

	std::cout << hello << lfie << std::endl;
	return 0;
}
