#include <stdio.h>
#include <math.h>

int main(){
    long n;
    scanf("%ld",&n);
    double a[n+1];
    // nhap
    for (int i=0; i<=n; i++)
        scanf("%lf",&a[i]);
    float c, x;
    scanf("%f%f", &c, &x);
    // tinh ng ham
    double s=0;
    for (int i=0; i<=n; i++){
        s+= (a[i]*pow(x, i+1))/(i+1);
    }
    printf("\n%.3lf", s+c);
}