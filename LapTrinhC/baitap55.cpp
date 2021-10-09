// 7. Viết chương trình nhập một mảng một chiều n số thực. Tìm và in ra màn hình giá trị lớn nhất của mảng.

/*#include<stdio.h>
void nhap(int a[], int n) {
    printf("Nhap n = ");
    scanf_s("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Nhap vao phan tu a[%d]: ", i);
        scanf_s("%d", &a[i]);
    }
}
int max(int a[], int n)
{
    int max;
    for (int i = 1; i < n; i++)
        if (max < a[i])
            max = a[i];
    return max;
}

int main() {
    int a[100];
    int n;
    nhap(a, n);
    printf("\nMax = %d", max(a, n));
    return 0;
}*/