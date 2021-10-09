/*#include <stdio.h>

void NhapMang(int a[], int n) {

    int i;

    for (i = 0; i < n; i++) {

        printf("Nhap a[%d]: ", i);

        scanf_s("%d", &a[i]);

    }

}




void XuatMang(int a[], int n) {

    printf("Cac phan tu co trong mang la:\n");

    int i;

    for (i = 0; i < n; i++) {

        printf("a[%d] = %d\n", i, a[i]);

    }

}

int main() {

    int n;

    int a[100];
    do {

        printf("Nhap n: ");

        scanf_s("%d", &n);

    } while (n < 2 || n>99);
    int dem = 0;
    NhapMang(a, n);
    int i;

    for (i = 0; i < n; i++) {
        if (a[i - 2] + a[i - 1] == a[i])
            dem++;
    }
    XuatMang(a, n);
    printf("Trong day co %d cap co tong 2 so sau bang so truoc", dem);

}*/