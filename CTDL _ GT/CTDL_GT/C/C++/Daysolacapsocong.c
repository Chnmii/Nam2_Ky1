#include <stdio.h>

int main(){
	long n;
	scanf("%ld", &n);
	long a[n];
	
	for (int i=1; i<=n; i++){
		scanf("%ld", &a[i]);
	}
	int i,d=0;
	for (i=1; i<n-1; i++){
		if (a[i]+a[i+1]==2*a[i+2] || a[i+1]+a[i+2]==2*a[i] || a[i]+a[i+2]==2*a[i+1])
			d++;
	}
    if (d==n-2)
        printf("\nDay la day cap so cong voi cong sai %d", a[i+1]-a[i]);
    else
        printf("\nDay khong la day cap so cong");
}