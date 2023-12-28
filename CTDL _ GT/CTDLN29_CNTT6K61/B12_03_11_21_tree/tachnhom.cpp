//tach nhom
#include<bits/stdc++.h>
using namespace std;
struct node
{
	int elem;
	node *left,*right;
	node(int n)  //tao de quy ca cay
	{
		elem = n;
		if(n%2 || n<=4) left=right=0;
		else 
		{
			left=new node(n/2-2);
			right=new node(n/2+2);
		}
	}	
};
void preorder(node *H){if(H) {cout<<H->elem<<" "; preorder(H->left);  preorder(H->right);}}
void inorder(node *H){if(H) { inorder(H->left); cout<<H->elem<<" "; inorder(H->right);}}
void postorder(node *H){if(H) { postorder(H->left);  postorder(H->right);cout<<H->elem<<" ";}}
void in_order(node *H,string p="\n")
{
	if(!H) return;
	in_order(H->left,p+"\t"); cout<<p<<H->elem; in_order(H->right,p+"\t");
}
int main()
{
	int n; cin>>n; node *H=new node(n); 
	cout<<"\nTien  tt : "; preorder(H);
	cout<<"\nTrung tt : "; inorder(H);
	cout<<"\nHau   tt : "; postorder(H);
	cout<<"\nVe cay : "; in_order(H);	
}


