#include <stdio.h>
#include <math.h>

int main(){
    int n, s;
    scanf("%d%d", &n, &s);
    int T=0;
    for (int i=1; i<=n; i++)
        T+= i;
    printf("\n%d", T-s);
}