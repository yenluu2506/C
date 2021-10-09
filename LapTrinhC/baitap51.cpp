//2. Viết chương trình nhập một mảng một chiều n số nguyên. Sắp xếp mảng theo thứ tự tăng dần. In ra màn hình mảng trước và sau khi sắp xếp.

/*#include <stdio.h>

int main() {
    int a[100];
    int n;
    printf("\nNhap so luong phan tu n: ");
    do {
        scanf_s("%d", &n);
        if (n <= 0) {
            printf("\nNhap lai n: ");
        }
    } while (n <= 0);

    for (int i = 0; i < n; i++) {
        printf("\nNhap a[%d]: ", i);
        scanf_s("%d", &a[i]);
    }

    printf("\nTruoc khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%5d", a[i]);

    }

    int tam;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                tam = a[i];
                a[i] = a[j];
                a[j] = tam;
            }
        }
    }


    printf("\nMang da sap xep la: ");
    for (int i = 0; i < n; i++) {
        printf("%5d", a[i]);
    }


}*/
