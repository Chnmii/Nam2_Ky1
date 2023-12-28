#include <stdio.h>
#include <math.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	
	for (int i=0; i<n; i++)
		scanf("%d%d", &a[i]);
	for (int i=0; i<n; i++)		
		if (a[i]%2==0){
			int t=a[i];
			a[i]= a[i+1];
			a[i+1]= t;
		}
	for (int i=0; i<n; i++)
		printf("%d", a[i]);
	
}