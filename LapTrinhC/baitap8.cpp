//1. Tìm ước số chung lớn nhất (UCLN) của 2 số a, b

/* #include <stdio.h>
int USCLN(int a, int b) {
    if (b == 0) return a;
    return USCLN(b, a % b);
}
int main() {
    int a, b;
    printf("Nhap vao gia tri a: ");
    scanf_s("%d", &a);
    printf("Nhap vao gia tri b: ");
    scanf_s("%d", &b);
    printf("USCLN cua %d va %d la: %d", a, b, USCLN(a, b));
} */