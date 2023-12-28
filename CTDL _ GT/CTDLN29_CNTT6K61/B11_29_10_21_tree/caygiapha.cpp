//cay gia pha
#include<bits/stdc++.h>
using namespace std;
struct node
{
	string elem;
	vector<node *>child;
	node(string e){elem=e;}
};
bool add(node *H,string cha,string con)
{
	if(!H) return 0;
	if(H->elem==cha) {H->child.push_back(new node(con)); return true;}
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

}


