#include <stdio.h>

double wyznacznik(double[2][2]);
int uklad2(double[2][2], double[2], double[2]);
void sprawdzenie(double[2][2], double[2], double[2]);

int main()
{
	double a[2][2], b[2], xy[2], out[2];
	printf("podaj układ w postaci: \n a11x+a12y=b1\n a21x+a22y=b2\n\n");
	if(scanf("%lgx%lgy=%lg", &a[0][0], &a[0][1], &b[0]) < 3)
	{
		printf("input error\n");
		return -1;
	}
	if(scanf("%lgx%lgy=%lg", &a[1][0], &a[1][1], &b[1]) < 3)
	{
		printf("input error\n");
		return -1;
	}
	int n = uklad2(a,b,xy);
	printf("Jest %d rozwiazan\n", n);
	if(n==1)
	{
		sprawdzenie(a,xy,out);
		printf("sprawdzenie: %lg=%lg, %lg=%lg\n", out[0], b[0], out[1], b[1]);
	}
	return 0;
}
