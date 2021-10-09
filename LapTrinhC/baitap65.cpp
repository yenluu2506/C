#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 100
#define TOAN 0
#define LY 1
#define HOA 2
struct sinhvien {
	char mslop[5];
	char hoten[35];
	float diem[3];
} danhsach[MAX];
int n = 0;
void nhapmoi()
{
	char mslop[5], tmp[3];
	int i;
	float diem[3];
	do {
		printf("\nCho biet ma so lop : ");
		gets_s(mslop);
		if (strlen(mslop))
		{
			strcpy(danhsach[n].mslop, mslop);
			printf("\nCho biet ho ten : ");
			gets_s(danhsach[n].hoten);
			printf("\nCho biet diem so : ");
			for (i = 0; i < 3; i++)
			{
				scanf("%f", &diem[i]);
				danhsach[n].diem[i] = diem[i];
			}
			gets_s(tmp);
			n++;
		}
	} while (strlen(mslop));
}
void timkiem()
{
	char mslop[5];
	int i = 0, found = 0;
	printf("\nCho biet ma so lop : ");
	gets_s(mslop);
	if (strlen(mslop))
		while (i < n)
			if (stricmp(danhsach[i].mslop, mslop) == 0)
			{
				printf("\nMa so lop : %s", danhsach[i].mslop);
				printf("\nHo va ten : %s", danhsach[i].hoten);
				printf("\nDiem Toan : %f", danhsach[i].diem[TOAN]);
				printf("\nDiem Ly : %f", danhsach[i].diem[LY]);
				printf("\nDiem Hoa : %f", danhsach[i].diem[HOA]);
				found = 1;
				break;
			}
			else
				i++;
	if (!found)
		printf("\nKhong tim thay!!!");
}
void xoa()
{
	char mslop[5], traloi;
	int i = 0, j;
	printf("\nCho biet ma so lop : ");
	gets_s(mslop);
	if (strlen(mslop))
		while (i < n)
			if (stricmp(danhsach[i].mslop, mslop) == 0)
			{
				printf("\nMa so lop : %s", danhsach[i].mslop);
				printf("\nHo va ten : %s", danhsach[i].hoten);
				printf("\nDiem Toan : %f", danhsach[i].diem[TOAN]);
				printf("\nDiem Ly : %f", danhsach[i].diem[LY]);
				printf("\nDiem Hoa : %f", danhsach[i].diem[HOA]);
				printf("\nCo muon xoa khong (C/K)? ");
				do {
					traloi = toupper(gets_s());
				} while (traloi != 'C' && traloi != 'K');
				putc(traloi, stdout);
				if (traloi == 'C')
				{
					n--;
					memcpy(&danhsach[i], &danhsach[i + 1],
						sizeof(struct sinhvien) * (n - i));
					break;
				}
			}
			else
				i++;
}
void menu()
{
	printf("\n***************");
	printf("\n* 1. Them *");
	printf("\n* 2. Xoa *");
	printf("\n* 3. Tim kiem *");
	printf("\n* 0. Thoat *");
	printf("\n***************");
	printf("\nChon lua ? ");
}
void main()
{
	char traloi;
	do {
		menu();
		do {
			traloi = getch();
		} while (traloi < '0' || traloi > '3');
		putc(traloi, stdout);
		switch (traloi)
		{
		case '1': nhapmoi();
			break;
		case '2': xoa();
			break;
		case '3': timkiem();
			break;
		}
	} while (traloi != '0');
}