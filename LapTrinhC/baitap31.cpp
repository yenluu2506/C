/*1. Xây dựng chương trình dạng hàm nhập vào một mảng số thực gồm n phần tử :
a.Sắp xếp dãy giảm dần
b.Tìm phần tử âm lớn nhất
c.In ra các số hoàn hảo*/

/*#include <stdio.h>
void Sapxep(float a[], int n) {
	float hv;

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] < a[j]) {
				hv = a[i];
				a[i] = a[j];
				a[j] = hv;
			}
		}
		printf("%.2f\t", a[i]);
	}
}

void AmMax(float a[], int n) {
	float max = 0;

	for (int i = 0; i < n; ++i) {
		if (a[i] < 0) {
			max = a[i];
			break;
		}
	}
	if (max != 0) {
		for (int i = 0; i < n; ++i) {
			if (a[i]<0 && a[i]>max)
				max = a[i];
		}
		printf("\n\nPhan tu am lon nhat trong day la %.2f", max);
	}
	else {
		printf("\n\nDay khong co phan tu am!");
	}
}

int Check(float a) {
	int S = 0;
	if (float(a) == int(a)) {
		for (int i = 1; i < a; i++)
			if ((int)a % i == 0)
				S += i;
	}
	if (float(S) == a)
		return 0;
}
void SoHoanHao(float a[], int n) {
	int dem = 0;
	for (int i = 0; i < n; i++) {
		if (Check(a[i]) == 0 && a[i] != 0) {
			printf("%.0f\t", a[i]);
			dem += 1;
		}
	}
	if (dem == 0)
		printf("khong co");
}

int main() {
	float a[100];
	int n;

	printf("Nhap so phan tu trong mang: ");
	scanf_s("%d", &n);
	while (n <= 0) {
		printf("Nhap lai: ");
		scanf_s("%d", &n);
	}

	for (int i = 0; i < n; i++) {
		printf("A[%d] = ", i);
		scanf_s("%f", &a[i]);
	}
	printf("\n\nDay duoc sap xep giam dan:\t");
	Sapxep(a, n);

	AmMax(a, n);

	printf("\n\nCac so hoan hao la:\t");
	SoHoanHao(a, n);
	printf("\n\n\n");
}*/

