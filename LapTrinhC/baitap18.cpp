//1. Viết chương trình chuyển một số nguyên sang hệ nhị phân

/*#include<stdio.h>  

int main()
{
    int a[10], n, i;

    printf("Nhap mot so nguyen: ");
    scanf_s("%d", &n);
    for (i = 0; n > 0; i++)
    {
        a[i] = n % 2;
        n = n / 2;
    }
    printf("\nChuyen doi sang he nhi phan la = ");
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
}*/

/*#include <stdio.h>

int main() {
    int n, a;
    printf("nhap so thap phan n: ");
    scanf_s("%d", &n);
    printf("so nhi phan la: ");
    while (n != 0) {
        a = n % 2;
        n = n / 2;
        printf("%d", a);
    }
    return 0;

}*/