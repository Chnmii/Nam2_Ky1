#include <stdio.h>
#include <math.h>

int main(){
    long n;
    scanf("%ld",&n);
    long T=0;
    for (int i=1; i<=n; i++)
        T+= 2*i-1;
    printf("\n%ld", T);
}