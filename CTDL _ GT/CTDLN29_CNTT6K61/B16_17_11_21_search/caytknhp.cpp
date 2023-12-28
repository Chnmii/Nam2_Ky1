#include<bits/stdc++.h>
using namespace std;
struct node
{
	int elem;
	node *L,*R;
	node(int x) {elem=x;L=R=0;}
};
void add(node *&H,int x)
{
	if(!H) H=new node(x);
	//else if(H->elem==x) return;
	else add(x<H->elem?H->L:H->R,x);
}
node *find(node *H,int x)
{
	if(!H || H->elem==x) return H;
	return find(x<H->elem?H->L:H->R,x);
}
void draw(node *H,string p="\n"){if(H) {draw(H->L,p+"\t"); cout<<p<<H->elem; draw(H->R,p+"\t");}}

int main()
{
	int a[]={62,53,54,83,62,16,62,37,48,89,57,60,96,81,30,36,70,75,47,75};
	int n=sizeof(a)/sizeof(a[0]);
	node *H=0;
	for(int x:a) add(H,x);
	draw(H);
	node *p=find(H,57);
	if(!p) cout<<"\nKhong co";
	else 
	{
		p->elem=-1;
	}
	draw(H);
}


