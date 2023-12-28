#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void nhap(double **a, double **b, int *n)
{
	printf("Nhap so phan tu: ");
	scanf("%d", n);
	(*a) = (double*) calloc (((*n)+2), sizeof(double));
	(*b) = (double*) calloc (((*n)+2), sizeof(double));
	for (int i=0; i<*n; i++)
	{
		printf("Nhap a%d: ", i+1);
		scanf("%lf", &(*a)[i]);
	}
	for (int i=0; i<*n; i++)
	{
		printf("Nhap b%d: ", i+1);
		scanf("%lf", &(*b)[i]);
	}
}

void xuat(double *a, double *b, int n)
{
	for (int i=0; i<n; i++)
	{
		printf("\n(%.2f,%.2f)", a[i], b[i]);
	}
}

void dgk(double *a, double *b, int n)
{
	double k=0;
	for (int i=0; i<n-2; i+=2)
	{
		k += sqrt((a[i+2]-a[i]) * (a[i+2]-a[i]) + (b[i+2]-b[i]) * (b[i+2]-b[i]));
	}
	printf("\nDo dai duong gap khuc di qua cac diem co chi so chan la: %.2lf", k);
}

int main()
{
	double *a, *b;
	int n;
	nhap(&a, &b, &n);
	xuat(a,b,n);
	//find(a,b,n);
	dgk(a,b,n);
	
	return 0;
	
}
