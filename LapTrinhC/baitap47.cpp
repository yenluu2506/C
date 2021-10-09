//15. Viết chương trình nhập một mảng một chiều a gồm n số thực. Hãy tính và in ra màn hình trung bình cộng của các phần tử trong mảng.

/*#include <stdio.h>
#include <conio.h>
#include <windows.h>

void nhapmang(float a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nNhap phan tu thu a[%d]: ", i);
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
float tbcong(float a[], int n)
{
    int i;
    float s = 0;
    for (i = 0; i < n; i++) s += a[i];
    return s / n;
}
void main()
{
    int n;
    float a[500];
    printf("\nnhap so phan tu trong mang: ");
    scanf_s("%d", &n);
    nhapmang(a, n);
    xemmang(a, n);
    printf("\ntrung binh cong cua mang: %5.3f ", tbcong(a, n));

}*/
