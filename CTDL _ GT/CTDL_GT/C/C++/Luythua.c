#include <stdio.h>
#include <math.h>

int main(){
    long long n;
    scanf("%lld",&n);
    long long a[n], b[n];
    for (int i=1; i<=n; i++)
        scanf("%lld%lld", &a[i], &b[i]);
    long long T=0, H, S=0;
    for (int i=1; i<=n; i++){
        T= pow(a[i], b[i]);
        H= T% 10000;
        S+= H;
    }
    printf("%lld", S);
}