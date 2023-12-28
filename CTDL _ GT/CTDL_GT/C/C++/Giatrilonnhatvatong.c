#include <stdio.h>
#include <math.h>

int main(){
    long n;
    scanf("%ld", &n);
    long a[n];

    for(int i=1; i<=n; i++)
        scanf("%ld", &a[i]);
    double max=a[1]/n;
    for (int i=1; i<=n; i++)
        if (max < a[i]/(n-i))
            max= a[i]/(n-i);
    printf("\n%.2lf", max);
    long s=0;
    for (int i=1; i<n; i++)
        s+= a[i]+a[i+1];
    printf("\n%ld", s);
    
}