//2. Tính TBC các số lẻ trong dãy số a1, a2, …, aN

/* #include <stdio.h>

const int MAX_SIZE = 100;
void Nhapmang(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		printf("a[%d] = ", i);
		scanf_s("%d", &a[i]);
	}
}

void Xuatmang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%5d", a[i]);
	}

}

int Sumodd(int a[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 != 0) {
			sum += a[i];
		}
	}
	return sum;
}

int main() {
	int arr[MAX_SIZE];

	int n;
	do {
		printf("nhap n: ");
		scanf_s("%d", &n);
	} while (n <= 0 || n > MAX_SIZE);
	Nhapmang(arr, n);
	Xuatmang(arr, n);

	printf("\n Tong cac so le = %d", Sumodd(arr, n));
} */
