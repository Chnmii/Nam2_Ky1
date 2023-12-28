#include <stdio.h>
#include <math.h>

int main(){
    long n;
    scanf("%ld",&n);
    long y = n/365;
    long m = (n-y*365)/30;
    long d = (n-y*365)-(m*30);
    printf("%ld nam", y);
	printf("\n%ld thang", m);
	printf("\n%ld ngay", d);
}