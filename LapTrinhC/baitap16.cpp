/*#include <stdio.h>
int main() {
	int a[100], n, dem = 0, x;
	printf("nhap n: ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("nhap a[%d] = ");
		scanf_s("%d", &a[i]);
	}
	for (int i = 0; i < n; i++)
		printf("a[%d] = %d \n", i, a[i]);
	printf("nhap x: ");
	scanf_s("%d", &x);
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] + a[j] == x)
				dem++;
		}
	}
	printf("so cap thoa man: %d", dem);
}*/