//cay gia pha
#include<bits/stdc++.h>
using namespace std;
struct node
{
	string elem;
	node *far;
	vector<node *>child;
	node(string e,node *f=0){elem=e;far=f;}
};
bool add(node *H,string cha,string con)
{
	if(!H) return 0;
	if(H->elem==cha) {H->child.push_back(new node(con,H)); return true;}
	for(auto h:H->child) if(add(h,cha,con)) return true;
	return false;
}
void preorder(node *H)	{if (!H) return; cout<<H->elem<<" "; for(auto c:H->child) preorder(c);}
void postorder(node *H)	{if (!H) return; for(auto c:H->child) postorder(c);	cout<<H->elem<<" ";}
void inorder(node *H)
{	
	if (!H) return;
	if(H->child.size()) inorder(H->child[0]);
	cout<<H->elem<<" ";
	for(int i=1;i<H->child.size();i++) inorder(H->child[i]);
}
node *find(node *H,string x)
{
	if(H->elem==x) return H;
	for(auto h:H->child)
	{
		node *p=find(h,x);
		if(p) return p;
	}
	return 0;
}
int main()
{
	ifstream fin("gp.txt");
	node *H=new node("A");
	string x,y;
	while(fin>>x>>y) add(H,x,y);
	preorder(H); cout<<"\n";
	inorder(H) ;cout<<"\n";
	postorder(H); cout<<"\n";
	fin.close();
	string xx;
	cout<<"Nhap ten can tim : "; cin>>xx; 
	node*p=find(H,xx);
	if(!p) cout<<"\nKhong co ";
	else
	{
		stack<node *> S;
		while(p!=H) {S.push(p); p=p->far;}
		cout<<H->elem;
		while(S.size()) {cout<<"->"<<S.top()->elem; S.pop();}
	}
}


