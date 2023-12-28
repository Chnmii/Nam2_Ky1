#include <stdio.h>
#include <math.h>

int main(){
    double x[1000], y[1000];
    double T;
    for (int i=1; i<=2; i++){
        scanf("%lf%lf", &x[i], &y[i]);
        T= sqrt(pow((x[i+1]-x[i]),2) + pow((y[i+1]-y[i]),2));
    }
    printf("\n%.4lf", T);
}
