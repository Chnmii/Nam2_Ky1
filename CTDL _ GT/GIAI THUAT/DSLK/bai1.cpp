#include"stdio.h"
#include"stdlib.h"
#include"math.h"

// DSLKD cac so nguyen
typedef struct Node {
	int key;
	Node * next;
};

Node *L;
Node *tao1nut(int x)
{ 	Node*P;
	P=(Node*) malloc(sizeof(Node));
	P->key =x;
	P->next=NULL;
	return P;
}

Node *Taods()
{ 	int i,n;
	Node *L, *P;
	L=NULL;

	printf("nhap so nut cua dan sach:");scanf("%d", &n);
	for(i=1;i<=n;i++)
	{ 	int k;
	printf("nhap thong tin:");scanf("%d", &k);
	P=tao1nut(k);
	if(L==NULL) L=P;
	else
	{
	Node *q;
	q=L;
	L=P;
	P->next =q;
	}
	}

	return L;
}

void duyetds(Node*L)
{
	Node *i;
	for(i=L;i!=NULL;i=i->next )
	printf("%3d",i->key );
}

Node *TaodsFIFO(){
	int i,n;
	Node *L,*P, *F;
	F=NULL;
	printf("\nNhap so nut cua danh sach :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int k;
		printf("Nhap thong tin : ");
		scanf("%d",&k);
		P=tao1nut(k);
		if(F==NULL) {
			L=P;
		}
		else{
			Node *p;
			p=L;
			while(p->next != NULL){
				p=p->next;
			}
			p->next=P;
		}
	}
}

int main()
{
	Node *L, *P;
	L=Taods();
	duyetds(L);
	P= TaodsFIFO();
	duyetds(P);
}
