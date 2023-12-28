#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct dathuc{
	int n;
	float a[100];	
};

int main(){
	struct dathuc P,Q,T;
	printf("Nhap bac cua da thuc P: ");
	scanf("%d", &P.n);
	for (int i=0; i<=P.n; i++){
		printf("Nhap he so bac %d: ", i);
		scanf("%f", &P.a[i]);
	}
	printf("Nhap bac cua da thuc Q: ");
	scanf("%d", &Q.n);
	for (int i=0; i<=Q.n; i++){
		printf("Nhap he so bac %d: ", i);
		scanf("%f", &Q.a[i]);
	}
	printf("P(x)=");
	for (int i=0; i<=P.n; i++)
		printf("%.2fx^%d+", P.a[i], i);
	printf("\nQ(x)=");
	for (int i=0; i<=Q.n; i++)
		printf("%.2fx^%d+", Q.a[i], i);
	int max= P.n>Q.n?P.n:Q.n;
	int min= P.n<Q.n?P.n:Q.n;
	for (int i=0; i<=min; i++)
		T.a[i]= P.a[i]+Q.a[i];
	for (int i=min+1; i<=max; i++)
		T.a[i]=P.a[i] > Q.a[i] ? P.a[i] : Q.a[i];
	printf("\nP(x)+Q(x)=");
	for (int i=0; i<= max; i++)
		printf("%.2fx^%d+", T.a[i], i);
	 
	// P'(x)+Q'(x)
	printf("\nF(x)= ");
	for (int i=1; i<=max; i++)
		printf("%.2fx^%d+", T.a[i]*i, i-1);
	
	// 1/|P(d)-Q(d)|
	float d, P1, Q1;
	printf("\nNhap so thuc d: ");
	scanf("%f", &d);
	for (int i=0; i<= P.n; i++){
		P1+= P.a[i]*pow(d,i);
	}
	for (int i=0; i<=Q.n; i++){
		Q1+= Q.a[i]*pow(d,i);
	}
	printf("\n1/|P(d)-Q(d)|= %.2f", 1.0*(1/abs(P1-Q1)));
	
	return 0;
}