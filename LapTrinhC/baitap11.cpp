//4. Đếm xem trong dãy a1, a2,…,aN có bao nhiêu số  nguyên tố ?

 #include <stdio.h>
#include <math.h>
//#define MAX_SIZE 100

/*void NhapMang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap arr[%d] = ", i);
        scanf_s("%d", &arr[i]);
    }
}

void XuatMang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\narr[%d] = %d", i, arr[i]);
    }
}

/*
    Kiểm tra số nguyên tố
*/
/*bool IsPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

/*
    Đếm số lượng số nguyên tố
*/
/*int PrimeCount(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (IsPrime(a[i]))
        {
            count++;
        }
    }
    return count;
}

/*
    Liệt kê các số nguyên tố
*/

/*void PrintPrime(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (IsPrime(a[i]))
        {
            printf("%d\t", a[i]);
        }
    }
}*/

/*int main()
{
    int arr[/*MAX_SIZE*///1000];

    //int n; // số lượng phần tử của mảng
    // Kiểm tra số lượng phần tử là số dương + nhỏ hơn MAX_SIZE
    /*do
    {
        printf("Nhap n = ");
        scanf_s("%d", &n);
    } while (n <= 0 || n > /*MAX_SIZE*///1000);

    // Nhập mảng
   //NhapMang(arr, n);

    // Xuất mảng
    //XuatMang(arr, n);

    // Giải bài toán
    //int primeCount = PrimeCount(arr, n);
    //printf("\nSo luong so nguyen to la %d", primeCount);
   /* if (primeCount > 0) {
        printf("\nDanh sach so nguyen to: ");
        PrintPrime(arr, n);
    }*/
//}
