#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct diem{
	double x, y;
	int mau;
};

int main(){
	int i, n, dem1=0, dem2=0, dem3=0;
	scanf("%d", &n);
	struct diem a[n];
	
	for (int i=1; i<=n; i++){
		printf("Nhap toa do: ");
		scanf("%lf%lf", &a[i].x, &a[i].y);
		printf("Nhap mau: ");
		scanf("%d", &a[i].mau);
	}
	
	// thong ke diem theo mau
	for (int i=1; i<=n; i++){
		if (a[i].mau == 1){
			dem1++;
		}
		if (a[i].mau == 2){
			dem2++;
		}
		if (a[i].mau == 3){
			dem3++;
		}
	}
	printf("\nSo diem mau do: %d", dem1);
	printf("\nSo diem mau xanh: %d", dem2);
	printf("\nSo diem mau vang: %d", dem3);
	
	// diem mau do gan goc toa do
	double  min = (pow(a[1].x, 2) + pow (a[1].y, 2));

	for (i=1; i<=n; i++){
		if (a[i].mau==1 && min > (pow(a[i].x, 2) + pow (a[i].y, 2))){
			min = pow(a[i].x, 2) + pow (a[i].y, 2);
		}
	}
	for (i=1; i<=n; i++)
		if (min == pow(a[i].x, 2) + pow (a[i].y, 2))
			printf("\nDiem mau do gan goc toa do la: (%.2lf,%.2lf)", a[i].x, a[i].y);

	return 0;
}