//Bài 40: Tính S(n) = CanBac2(x^n + CanBac2(x^n-1 + … + CanBac2(x^2 + CanBac2(x)))) có n dấu căn

/*#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int i, n;
	float S;
	do
	{
		printf("\nNhap n(n >= 1): ");
		scanf_s("%d", &n);

		if (n < 1)
		{
			printf("\nn phai >= 1. Xin nhap lai !");
		}
	} while (n < 1);

	i = 1;
	S = 0;

	while (i <= n)
	{
		S = sqrt(i + S);
		i++;
	}
	printf("\nTong S = %f", S);

	return 0;
}*/
