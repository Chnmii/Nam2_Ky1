//danh sach lien ket don
#include<bits/stdc++.h>
using namespace std;
struct node
{
	int elem;
	node *next;
	node(int x=0,node *N=0) {elem=x;next=N;}
};
void addfirst(node *&H,int x){	H=new node(x,H);}
void addlast(node *&H,int x)
{
	if(!H) H=new node(x);
	else 
	{
		node *p=H;
		while(p->next) p=p->next;  //ket thuc while p->last
		p->next=new node(x);	
	}	
}
void append(node *&H,int x)
{
	if(!H) H=new node(x);
	else append(H->next,x);
}
void travel(node *H)
{
	for(node *p=H;p; p=p->next) cout<<p->elem<<" ";
}
int main()
{
	node*H=0;
	for(int i=1;i<10;i++) i%2?addfirst(H,i*i):append(H,i*i);
	cout<<"\nDanh sach "; travel(H);
}


