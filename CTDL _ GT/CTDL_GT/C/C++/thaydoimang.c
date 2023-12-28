#include <stdio.h>

int doi_mang(int i, int v, int n[100]){
    for (i=0; i<19; i++){
        v=n[i];
        n[i]=n[19-i];
        n[19-i]=v;
    }

}
int main(){
    int a[100];
    int j,u; 
    for (int j=0; j<20; j++)
        scanf("%d", &a[j]);
    doimang(j,u,a[100]);
    printf("\n%d", a[j]);
}