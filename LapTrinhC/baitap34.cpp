/*#include <stdio.h>
#include <string.h>


struct Date {
	int ngay, thang, nam;
};
struct SinhVien {
	char Ten[30];
	char MSSV[20];
	float DiemTB;
	struct Date NgaySinh;
};
void NhapNgaySinh(struct Date& ns) {
	printf("\tNhap ngay: ");
	scanf_s("%d", &ns.ngay);
	printf("\tNhap thang: ");
	scanf_s("%d", &ns.thang);
	printf("\tNhap nam: ");
	scanf_s("%d", &ns.nam);
}
void XuatNgaySinh(struct Date ns) {
	printf("Ngay sinh: %d/%d/%d\n", ns.ngay, ns.thang, ns.nam);
}
void Nhap(struct SinhVien& a) {
	fflush(stdin);
	printf("Nhap ten: ");
	gets_s(a.Ten);
	printf("Nhap MSSV: ");
	gets_s(a.MSSV);
	printf("Nhap Diem TB: ");
	scanf_s("%f", &a.DiemTB);
	printf("Nhap Ngay sinh: \n");
	NhapNgaySinh(a.NgaySinh);
}
void Xuat(struct SinhVien a) {
	printf("Ten: %s\n", a.Ten);
	printf("MSSV: %s\n", a.MSSV);
	printf("DiemTB: %.1f\n", a.DiemTB);
	XuatNgaySinh(a.NgaySinh);
}
void NhapDS(struct SinhVien a[], int n) {
	for (int i = 0; i < n; i++) {
		printf("Nhap sv %d: \n", i);
		Nhap(a[i]);
	}
}
void XuatDS(struct SinhVien a[], int n) {
	for (int i = 0; i < n; i++) {
		printf("Xuat sv %d: \n", i);
		Xuat(a[i]);
	}
}
int main() {
	struct SinhVien sv[10], a1, a2;
	Nhap(a1);
	a2 = a1;
	Xuat(a1);
	Xuat(a2);
}
	//int n=3;
	//NhapDS(sv,n);
	//XuatDS(sv,n);
	/*printf("Nhap sv1: \n");
	Nhap(sv1);
	printf("Nhap sv2: \n");
	Nhap(sv2);
	printf("Xuat sv1: \n");
	Xuat(sv1);
	printf("Xuat sv2: \n");
	Xuat(sv2);
	*/
	/*nhap thong tin sv1
	printf("Nhap ten sv1: ");
	gets(sv1.Ten);
	printf("Nhap MSSV: ");
	gets(sv1.MSSV);
	printf("Nhap Diem TB: ");
	scanf("%f", &sv1.DiemTB);
	fflush(stdin);
	printf("Nhap ten sv2: ");
	gets(sv2.Ten);
	printf("Nhap MSSV: ");
	gets(sv2.MSSV);
	printf("Nhap Diem TB: ");
	scanf("%f", &sv2.DiemTB);
	printf("Thong tin sv 1: \n");
	printf("Ten: %s\n", sv1.Ten);
	printf("MSSV: %s\n",sv1.MSSV);
	printf("DiemTB: %.1f",sv1.DiemTB);

	printf("Thong tin sv 2: \n");
	printf("Ten: %s\n", sv2.Ten);
	printf("MSSV: %s\n",sv2.MSSV);
	printf("DiemTB: %.1f",sv2.DiemTB);
	*/

/*#include<stdio.h>
#include<iostream>
using namespace std;
struct ngaythang
{
    int ng;
    int th;
    int nm;
};
void nhap(ngaythang& ngay);
int ktranhuan(ngaythang ngay);
void sothutungaytrongnam(ngaythang ngay);
void ngaytruoc(ngaythang ngay);
void ngaysau(ngaythang ngay);
int main()
{
    struct ngaythang ngay;
    nhap(ngay);
    if (ktranhuan(ngay) == 1)
        printf("nhuan");
    else
        printf("khong nhuan");
    printf("\n");
    sothutungaytrongnam(ngay);
    printf("\n");
    ngaytruoc(ngay);
    printf("\n");
    ngaysau(ngay);
    printf("\n");
    system("pause");
    return 0;

    /*nhap(ngay2);
    khoangcach2ngay(ngay1,ngay2);
    printf("\n");
    sosanh2ngay(ngay1,ngay2);*/
/*}

void nhap(ngaythang& ngay)
{
    printf("nhap ngay");
    scanf_s("%d", &(ngay.ng));
    printf("nhap thang");
    scanf_s("%d", &(ngay.th));
    printf("nhap nam");
    scanf_s("%d", &(ngay.nm));
}
int ktranhuan(ngaythang ngay)
{
    if ((((ngay.nm) % 100 == 0) && ((ngay.nm) % 400 == 0)) || (((ngay.nm) % 100 != 0) && ((ngay.nm) % 4 == 0)))
        return 1;
    else
        return 0;
}
void sothutungaytrongnam(ngaythang ngay)
{
    int n, thutu;
    n = 0;
    switch (ngay.th)
    {
    case 12: n = n + 30;
    case 11: n = n + 31;
    case 10: n = n + 30;
    case 9: n = n + 31;
    case 8: n = n + 31;
    case 7: n = n + 30;
    case 6: n = n + 31;
    case 5: n = n + 30;
    case 4: n = n + 31;
    case 3: if (ktranhuan(ngay))
        n = n + 29;
          else
        n = n + 28;
    case 2: n = n + 31;
    case 1: n = n;
    }
    thutu = n + (ngay.ng);
    printf("ngay thu %d trong nam", thutu);
}
void ngaytruoc(ngaythang ngay)
{
    if (ngay.ng == 1)
        switch (ngay.th)
        {
        case 1: printf("ngay truoc la 31/12/%d", ngay.nm - 1);
            break;
        case 3: if (ktranhuan(ngay))
            printf("ngay truoc la 29/2/%d", ngay.nm);
            break;
        case 4: case 6: case 9: case 11:case 2: printf("ngay truoc la 31/%d/%d", ngay.th - 1, ngay.nm);
            break;
        default:
            printf("ngay truoc la 30/%d/%d", ngay.th - 1, ngay.nm);
        }
    else
        printf("ngay truoc la %d/%d/%d", ngay.ng - 1, ngay.th, ngay.nm);
}
void ngaysau(ngaythang ngay)
{

    switch (ngay.th)
    {
    case 12: if (ngay.ng == 31)
        printf("ngay sau la 1/1/%d", ngay.nm + 1);
        break;
    case 2: if (((ktranhuan(ngay) == 1) && (ngay.ng == 29)) || ((ktranhuan(ngay) == 0) && (ngay.ng == 28)))
        printf("ngay sau la 1/3/%d", (ngay.nm));
        break;
    case 4: case 6: case 9: case 11: if (ngay.ng == 30)
        printf("ngay sau la 1/%d/%d", ngay.th + 1, ngay.nm);
        break;
    case 1: case 3: case 5: case 7: case 8: case 10:
        if (ngay.ng == 31)
            printf("ngay sau la 1/%d/%d", ngay.th + 1, ngay.nm);
        break;
    default:
        printf("ngay sau la %d/%d/%d", ngay.ng + 1, ngay.th, ngay.nm);
    }
}*/

/*#include<stdio.h>
struct sinhvien {
	int ngaysinh;
	int thangsinh;
	int namsinh;
	float diem;
	char ho[10];
	char ten[20];
	char gioitinh[10];
};
int main() {
	//	sinhvien sv1, sv2;
	//	struct sinhvien sv3, sv4;
	struct sinhvien sv;
	printf("Nhap nam sinh");
	scanf_s("%d", &sv.namsinh);
	while (sv.namsinh > 2020) {
		printf("Nam sinh khong hop le vui long nhap lai ");
		scanf_s("%d", &sv.namsinh);
	}
	if (sv.namsinh % 4 == 0) {
		printf("Sinh vien sinh vao nam nhuan");
		scanf_s("%d", &sv.thangsinh);
		scanf_s("%d", &sv.ngaysinh);
		do {
			printf("Ngay sinh khong hop le vui long nhap lai ");
			scanf_s("%d", &sv.thangsinh);
			scanf_s("%d", &sv.ngaysinh);
		} while (sv.thangsinh == 2 && sv.ngaysinh > 29);
	}
	while (sv.namsinh)
		while (sv.ngaysinh > 31 && sv.ngaysinh <= 0) {
			printf("Ngay sinh khong hop le vui long nhap lai: ");
			scanf_s("%d", &sv.ngaysinh);
		}
	while (sv.thangsinh > 12 && sv.thangsinh <= 0) {
		printf("Thang sinh khong hop le vui long nhap lai: ");
		scanf_s("%d", &sv.thangsinh);
	}

	printf("Ngay sinh: %d/%d/%d", sv.ngaysinh, sv.thangsinh, sv.namsinh);
}*/