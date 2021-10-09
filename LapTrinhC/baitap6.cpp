//6. Viết chương trình cho biết chữ số hàng nghìn, hàng trăm, hàng chục, hàng đơn vị của một số có 4 chữ số.

/* #include <stdio.h>
int main() {
	int a, hangdonvi, hangchuc, hangtram, hangnghin;
	printf("nhap vao 1 so co 4 chu so: ");
	scanf_s("%d", &a);

	hangdonvi = a % 10;
	printf("\n Chu so hang don vi la %d", hangdonvi);
	hangchuc = a % 100/10;
	printf("\n Chu so hang chuc la %d", hangchuc);
	hangtram = a % 1000/100;
	printf("\n Chu so hang tram la %d", hangtram);
	hangnghin = a % 10000/1000;
	printf("\n Chu so hang nghin la %d", hangnghin);
} */