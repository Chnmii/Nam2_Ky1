#include<bits/stdc++.h>
using namespace std;
struct node
{
	bool elem;
	node *child[10]={};  //mang 10 con tro khoi gan toan 0
	node(bool e=0) {elem=e;}
};
bool add(node *&H,char *x) //tra ve true khi khong co tien to xuat hien
{
	if(*x==0) return H->elem=true; 
	int k=*x-'0';
	if(H->child[k] && (H->child[k]->elem || *(x+1)==0)) return false;
	if(H->child[k]==0) H->child[k]=new node();	
	return add(H->child[k],x+1);
}
bool sol()
{
	node *H=new node();
	int n;
	scanf("%d",&n);
	bool ok=1;
	while(n--)
	{
		char x[1000];
		scanf("%s",x);
		if(!ok) continue;
		ok=add(H,x);
	}
	return ok;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--) printf(sol()?"YES\n":"NO\n");
}


