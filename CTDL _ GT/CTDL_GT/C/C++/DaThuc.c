#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

typedef struct DaThuc
{
    int bac;
    float *hs;
};

struct DaThuc nhapdt()
{   
    struct DaThuc P;
    printf("\nNhap bac cua da thuc: ");
    scanf("%d", &P.bac);
    while (P.bac<0){
		printf("Nhap bac >=0 cua da thuc: ");
		scanf("%d", &P.bac);
	}
    P.hs= (float *) malloc (sizeof(float) * (P.bac+1));
    int i;
    for(i=0; i<= P.bac; i++)
    {
        printf("Nhap hs ung voi bac %d: ", i);
        scanf("%f", &P.hs[i]);
    }
    // while (P.hs[P.bac]==0)
    // {
    // 	printf("Nhap hs <>0 ung voi bac %d: ", P.bac);
    // 	scanf("%f", &P.hs[i]);
	// }
    return P;
}

void indt(struct DaThuc P){
    printf("%.2f", P.hs[0]);
	
	for (int i=1; i<=P.bac; i++){
		printf("+ %.2fx^%d", P.hs[i], i);
	}
}

float tinh(struct DaThuc P, float d)
{
    float s=0;
    for (int i=0; i<= P.bac; i++)
    {
        s+= P.hs[i]*pow(d,i);
    }
    return s;
}

void tong(struct DaThuc P, struct DaThuc Q, struct DaThuc R)
{
    int max= P.bac > Q.bac ? P.bac : Q.bac;
	int min= P.bac < Q.bac ? P.bac : Q.bac;
	for (int i=0; i<= min; i++)
    {
		R.hs[i]= P.hs[i] + Q.hs[i];
	}
	for (int i= min+1; i<= max; i++)
    {
		R.hs[i]= (P.bac > Q.bac) ? P.hs[i] : Q.hs[i];
	}
}

int main()
{
    struct DaThuc P,Q,R;
    float x1, x2;
    P= nhapdt();
    indt(P);
    Q= nhapdt();
    indt(Q);
    printf("\nNhap x1: ");
    scanf("%f", &x1);
    printf("\nNhap x2: ");
    scanf("%f", &x2);
    printf("\nP(x1)= %.2f", tinh(P,x1));
    printf("\nQ(x2)= %.2f", tinh(Q,x2));
    // tong(P,Q,R);
    // indt(R);

    free(Q.hs);
    free(P.hs);

    return 0;
}