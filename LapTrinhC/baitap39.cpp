/*2. Viết chương trình nhập vào từ bàn phím ba số thực a, b, c.Kiểm tra ba số vừa nhập có thỏa
mãn điều kiện là độ dài ba cạnh của tam giác hay không ? Nếu có, tính chu vi, diện tích của
tam giác đó.*/

/*#include <stdio.h>
#include <math.h>
int main() {

	int a, b, c, cv;
	float p, dt;
	printf("Nhap vao 3 canh a, b, c: ");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a > 0 && b > 0 && c > 0) {
		cv = a + b + c;
		printf("\nChu vi cua tam giac la: %d", cv);
		p = (a + b + c) / 2;
		dt = sqrt(p * (p - a) * (p - b) * (p - c));
		printf("\nDien tich cua tam giac la: %3f", dt);
	}
	else
		printf("Do dai ba cạnh khong thoa man dieu kien.");
}*/