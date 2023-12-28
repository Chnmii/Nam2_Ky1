#include<bits/stdc++.h>
using namespace std;
struct node
{
	int elem;
	node*next;
	node(int x){elem=x; next=0;}
};
int main()
{
	int n,k;
	cin>>n>>k;
	node *p=new node(1),*H=p;
	for(int i=2;i<=n;i++) H=H->next=new node(i); 
	H->next=p;
	while(n>1)
	{
		for(int i=1;i<k;i++) H=H->next;
		H->next=H->next->next;
		n--;
	}
	cout<<H->elem;
}


