#include <stdio.h>

int nto(int k){
	int i;
	for (i=2; i*i<=k; i++){
		if (k%i==0)
			return 0;
	}
	return 1;
}
int main(){
	long n; 
	scanf("%ld", &n);
	if (n==0 || n==1){
		printf("NO");
		return 0;
	}
	
	if (nto(n)==1 && n>0)
		printf("YES");
	else 
		printf("NO");
	
	return 0;
}