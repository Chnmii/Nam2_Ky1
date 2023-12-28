#include <stdio.h>
#include <math.h>

int main(){
	long long n;
	long long a[100][100];
	scanf("%lld", &n);
	// nhap
	for (int i=1; i<=n; i++)
		for (int j=1; j<=n; j++)
			scanf("%lld", &a[i][j]);
	// tinh
	long long Tich=1, Tong=0;
	for (int i=1; i<=n; i++)
		for (int j=1; j<=n; j++){
			if (i==j)
				Tich*= a[i][j];
			}
	for (int i=1; i<=n; i++)
		for (int j=1; j<=n; j++){
			if (i+j == n+1)
				Tong+= a[i][j];
		}
	printf("%lld", Tich-Tong);
}