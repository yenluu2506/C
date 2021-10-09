/*#include<stdio.h>
#include<string.h>
using namespace std;
struct date
{
    int ngay, thang, nam;
};
typedef struct sinhvien
{
    char hoten[50], gioitinh[5], noisinh[30];
    int mssv, manhom;
    date ngaysinh;
};
int main()
{
    sinhvien a[50], t;
    int i, j, n;
    printf("Hay nhap so luong sinh vien: ");
    scanf_s("%d", n);
    for (i = 0; i < n; i++)
    {
        printf("Sinh vien thu ", i + 1);
        printf("Nhap ho ten: ", ns.ignore(1), ns.getline(a[i].hoten, 25));
        printf("Nhap gioi tinh: ", ns.getline(a[i].gioitinh, 5));
        printf("Nhap noi sinh: ", ns.getline(a[i].noisinh, 30));
        printf("Nhap MSSV: "); 
        scanf_s("%d", a[i].mssv);
        printf("Nhap ma nhom: ");
        scanf_s("%d", a[i].manhom);
        printf("Nhap ngay sinh: ");
        cin >> a[i].ngaysinh.ngay >> a[i].ngaysinh.thang >> a[i].ngaysinh.nam;
    }
    cout << "-----------Thong tin cac sinh vien vua nhap la-----------" << endl;
    cout << "Ho Ten \t\t Gioi Tinh \t Noi Sinh \t MSSV \t Ma Nhom \t Ngay Sinh" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i].hoten << "\t" << a[i].gioitinh << "\t" << a[i].noisinh << "\t" << a[i].mssv << "\t" << a[i].manhom << "\t" << a[i].ngaysinh.ngay << "/" << a[i].ngaysinh.thang << "/" << a[i].ngaysinh.nam;
    }
    getch();
}*/