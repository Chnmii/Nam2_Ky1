#include <stdio.h>
#include <math.h>

int main(){
    long long m,n;
    scanf("%lld%lld", &m, &n);
    long long a[m][n];
    long long b[m][n];
    long long c[m][n];
    
    for (int i=1; i<=m; i++)
        for (int j=1; j<=n; j++){
            scanf("%lld", &a[i][j]);
        }
    for (int i=1; i<=m; i++)
        for (int j=1; j<=n; j++){
            scanf("%lld", &b[i][j]);
        }
    for (int i=1; i<=m; i++)
        for (int j=1; j<=n; j++){
            c[i][j]= a[i][j]+ b[i][j];
        }
    for (int i=1; i<=m; i++){
        for (int j=1; j<=n; j++){
            printf("%5lld", c[i][j]);
        }
        printf("\n");
    }
    
}