#include <stdio.h>

int main(){
	long n;
	scanf("%ld", &n);
	for (int i=1; i<=n; i++){
		printf("%ld %ld %ld\n", i, i*i, i*i*i);
	}
		  
}