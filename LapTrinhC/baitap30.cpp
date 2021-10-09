/*1. Xây dựng chương trình dạng hàm nhập vào một mảng số thực gồm n phần tử:
a. Sắp xếp dãy giảm dần
b. Tìm phần tử âm lớn nhất
c. In ra các số hoàn hảo*/

/*#include <stdio.h>

void nhap(int* arr, int* n) {
	while (*n <= 0) {
		printf("Nhap n > 0: ");
		scanf_s("%d", n);
	}
	int i;
	for (i = 0; i < *n; i++) {
		printf("arr[%d] = ", i);
		scanf_s("%d", &arr[i]);
	}
}


/*void sapXepTang(int* arr, int n) {
	int i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = n - 1; j > i; j--) {
			if (arr[j] < arr[j - 1]) {
				int tmp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = tmp;
			}
		}
	}
}*/

/*void sapXepGiam(int* arr, int n) {
	int i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = n - 1; j > i; j--) {
			if (arr[j] > arr[j - 1]) {
				int tmp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = tmp;
			}
		}
	}
}

void hienThi(int* arr, int n) {
	int i;
	for (i = 0; i < n; i++) {
		printf("%6d", arr[i]);
	}
	printf("\n");
}

void min(int* arr, int n)
{
	int min = arr[0];
	for (int i = 1; i < n; i++)
		if (min > arr[i])
			min = arr[i];
}

int main() {
	int n = 0;
	int arr[100];

	nhap(arr, &n);
	/*printf("\nTruoc sap xep: \n");
	hienThi(arr, n);*/

	/*sapXepTang(arr, n);
	printf("\nSau sap xep tang: \n");
	hienThi(arr, n);*/

/*	sapXepGiam(arr, n);
	printf("\nSap xep giam la: \n");
	hienThi(arr, n);
}*/
