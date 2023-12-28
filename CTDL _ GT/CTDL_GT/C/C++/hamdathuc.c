#include <stdio.h>
#include <math.h>

void nhap(float p[], int *m){
	printf("\nNhap bac cua da thuc: ");
	scanf("%d", &*m);
	for (int i=0; i<=*m; i++){
		printf("Nhap he so bac %d: ", i);
		scanf("%f", &p[i]);
	}
}
void xuat(float p[], int m){
	printf("%.2f", p[0]);
	for (int i=1; i<=m; i++){
		printf("+ %.2fx^%d", p[i], i);
	}
}
float tinh(float p[], int m, float d){
	float s=0;
	for (int i=0; i<=m; i++){
		s+= p[i]*pow(d,i);
	}
	return s;
}
float tong(float p[],int m, float q[], int n, float r[]){
	int max= m>n?m:n;
	int min= m<n?m:n;
	for (int i=0; i<=min; i++){
		r[i]= p[i]+q[i];
	}
	for (int i=min+1; i<=max; i++){
		r[i]= m>n?p[i]:q[i];
	}
}

int main(){
	int m,n;
	float p[100], q[100];
	// da thuc P(x)
	nhap(p, &m);
	printf("P(x)=");
	xuat(p, m);
	// da thuc Q(x)
	nhap(q, &n);
	printf("Q(x)=");
	xuat(q, n);

	
}
