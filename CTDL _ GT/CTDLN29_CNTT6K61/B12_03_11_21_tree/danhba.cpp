#include<bits/stdc++.h>
using namespace std;
struct node
{
	int elem;
	node *child[26]={};  //mang 26 con tro khoi gan toan 0
	node(int e=0) {elem=e;}
};
void add(node *&H,char *x)  //them xau vao cay
{
	H->elem++;
	if(*x==0) return;
	if(H->child[*x-'a']==0) H->child[*x-'a']=new node();
	return add(H->child[*x-'a'],x+1);
}
int get(node *&H,char *x)  //truy van
{
	if(!H) return 0;
	if(*x==0) return H->elem;
	return get(H->child[*x-'a'],x+1);
}
int main()
{
	int n;
	char x[100],y[100];
	scanf("%d",&n);
	node *H=new node();
	while(n--) 
	{
		scanf("%s %s",x,y);
		if(*x=='a') add(H,y);
		else printf("%d\n",get(H,y));
	}
}


