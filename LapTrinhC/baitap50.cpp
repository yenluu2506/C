//1. Viết chương trình nhập vào 1 dãy số từ a1, a2, …, an. In dãy số vừa nhập ra màn hình theo nguyên tắc 1 dòng gồm 10 phần tử, dòng cuối có thể có ít hơn 10 phần tử.

/*#include <stdio.h>
void Nhap(int a[], int n) {
	for (int i = 1; i <= n; i++) {
		printf("Nhap a[%d]= ", i);
		scanf_s("%d", &a[i]);
	}
}
void Xuat(int a[], int n) {
	for (int i = 1; i <= n; i++) {
		printf("a[%d]= %d;\t", a[i], i);
		if (i % 10 == 0) {
			printf("\n");
		}
	}
}
int main() {
	int a[100], n;
	do {
		printf("Nhap n: ");
		scanf_s("%d", &n);
	} while (n < 0);
	Nhap(a, n);
	printf("Day so vua nhap la: \n");
	Xuat(a, n);
}*/
