//8. Viết phương trình cho phép giải hệ phương trình bậc nhất 2 ẩn x, y

/*#include <stdio.h>

int main() {

	float a1, a2, b1, b2, c1, c2, Dx, Dy, D, x, y;
	printf("Nhap vao a1, b1, c1: ");
	scanf_s("%f%f%f", &a1, &b1, &c1);
	printf("Nhap vao a2, b2, c2: ");
	scanf_s("%f%f%f", &a2, &b2, &c2);

	D = a1 * b2 - b1 * a2;
	Dx = c1 * b2 - c2 * b1;
	Dy = a1 * c2 - c1 * a2;

	if (D == 0) {
		if (Dx == 0 && Dy == 0) {
			printf("He phuong trinh co vo so nghiem.");
		}
		else {
			printf("He phuong trinh vo nghiem.");
		}
	}
	else {
		x = Dx / D;
		y = Dy / D;
		printf("He phuong trinh co nghiem la: (%.2f %.2f", x, y);
	}
}*/