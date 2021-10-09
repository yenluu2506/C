//19. Viết chương trình nhập một mảng một chiều n số thực. Đếm và thông báo ra màn hình trong mảng có bao nhiêu phần tử âm.

/*#include <stdio.h>
#include <conio.h>
void nhapmang(float a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nNhap a[%d]: ", i);
        scanf_s("%f", &a[i]);
    }
}
void xemmang(float a[], int n)
{
    int i;
    printf("\n");
    for (i = 0; i < n; i++)
        printf("  %5.2f  ", a[i]);
    printf("\n");
}
int dem(float a[], int n)
{
    int i, dem1 = 0;
    for (i = 0; i < n; i++) if (a[i] < 0) dem1++;
    return dem1;
}
void main()
{
    int n;
    float a[500];
    printf("\nnhap so phan tu trong mang: ");
    scanf_s("%d", &n);
    nhapmang(a, n);
    xemmang(a, n);
    printf("\nSo phan tu am trong mang: %5d", dem(a, n));

}*/