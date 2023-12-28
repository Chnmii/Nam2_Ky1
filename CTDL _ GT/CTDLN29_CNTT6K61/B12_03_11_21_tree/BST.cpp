//cay tim kiem nhi phan
#include<bits/stdc++.h>
using namespace std;
struct node
{
	int elem;
	node *left,*right;
	node(int x) {elem=x;left=right=0;}	
};
class tree
{
	private:
		node *root=0;
		list<int> L;
		int n;
		void add(node *&H,int x)
		{
			if(!H) H=new node(x);
			else add(x<H->elem?H->left:H->right,x);
		}
		void inorder(node *H)
		{
			if(H) { inorder(H->left); L.push_back(H->elem); inorder(H->right);}
		}
		int Max(node *H) {return H->right?Max(H->right):H->elem;}
		int Min(node *H) {return H->left?Min(H->left):H->elem;}
		bool remove(node *&H,int x) //xoa duoc tra ve true, khong co tra ve false
		{
			if(!H) return 0;
			if(H->elem==x)
			{
				if(!H->left) {H=H->right; return 1;}
				else if(!H->right) {H=H->left; return 1;}
				H->elem=Max(H->left);
				return remove(H->left,H->elem);
			}
			return remove(x<H->elem?H->left:H->right,x);
		}
	public:
		typedef typename list<int>::iterator iterator;
		iterator begin() {L.clear(); inorder(root); return L.begin();}
		iterator end() {return L.end();}
		tree() {n=0;root=0;}
		int size() {return n;}
		bool empty() {return n==0;}
		//void travel() {inorder(root);}
		void insert(int x)
		{
			n++;
			add(root,x);
		}
		void erase(int x)
		{
			n-=remove(root,x);
		}
};
int main()
{
	tree T;
	int x;
	for(int x:{35,13,74,63,62,15,63,17,13,46,34,35,72,83,45,81,27,63,16}) T.insert(x);
	cout<<"\nCay : "; for(auto it=T.begin();it!=T.end();it++) cout<<*it<<" ";
	do
	{
		cout<<"\nx = " ;cin>>x;
		T.erase(x);
		cout<<"\nsize : "<<T.size();
		cout<<"\nCay : "; for(auto x:T) cout<<x<<" ";
	}while(x>=0);
}


