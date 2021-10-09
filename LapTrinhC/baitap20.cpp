//2. Viết chương trình tìm giá trị thực x xuất hiện đầu tiên trong dãy số thực gồm n phần tử

/*#include <stdio.h>
const int MAX = 100;
int TimKiem(int a[], int n, int v) {
	for (int i = 0; i < n; ++i) {
		if (a[i] == v) {
			return i;
		}
	}
	return -1;
}

int Nhapmang(int a[], int n) {
	printf("Nhap vao so phan tu: ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("Nhap a[%d]: ", i);
		scanf_s("%d", &a[i]);
	}
    return 0;
}

int main() {
    int arr[MAX];
    int n;
    /*printf("Nhap vao so luong phan tu: ");
    do {
        scanf_s("%d", &n);
        if (n <= 0 || n > MAX) {
            printf("\nNhap so luong phan tu: ");
        }
    } while (n <= 0 || n > MAX);
    printf("Nhap mang\n");
    Nhapmang(arr, n);
    int v;
    printf("\nNhap vao gia tri can tim: ");
    scanf_s("%d", &v);
    printf("\nVi tri xuat hien cua so %d tai vi tri so %d!", v, TimKiem(arr, n, v+1));*/
