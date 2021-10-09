//1. Mảng 1 chiều: Viết chương trình: (dạng hàm)
#include <stdio.h>
//Nhập vào một mảng (n phần tử, n nhập từ bàn phím)
void Nhapmang(int a[], int n) {
	while (n <= 0) {
		printf("Nhap lai n: ");
		scanf_s("%d", &n);
	}
	for (int i = 0; i < n; i++) {
		printf("a[%d]", i);
		scanf_s("a[%d]", &a[i]);
	}
}
