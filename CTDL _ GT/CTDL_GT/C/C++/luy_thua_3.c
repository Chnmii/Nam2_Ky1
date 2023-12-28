#include <stdio.h>
#include <math.h>

int luy_thua_3(long long n)
{   
    long long t=cbrt(n);
    if(n==t*t*t)
        return 1;

    else return 0;

}
int main()
{
    long n;
    scanf("%ld",&n);
    long long a[n];
    for (int i=0; i<n; i++)
        scanf("%lld",&a[i]);
    for (int i=0; i<n; i++)
    {
        if (luy_thua_3(a[i])==1)
            printf("YES\n");
        else 
            if (luy_thua_3(a[i])==0)
                printf("NO\n");
    }
    return 0;
}