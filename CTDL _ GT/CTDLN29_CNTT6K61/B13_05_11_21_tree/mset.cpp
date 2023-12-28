//cay tim kiem nhi phan
#include<bits/stdc++.h>
using namespace std;
template<class T>
struct node
{
	T elem;
	node *left,*right;
	node(T x) {elem=x;left=right=0;}	
};
template<class T,class Cmp=less<T> >
class MSet
{
	private:
		node<T> *root=0;
		Cmp ss;
		list<T> L;
		int n;
		bool add(node<T> *&H,T x)
		{
			if(!H) {H=new node<T>(x); return 1;}
			if(H->elem==x) return 0;
			return add(ss(x,H->elem)?H->left:H->right,x);
		}
		void inorder(node<T> *H)
		{
			if(H) { inorder(H->left); L.push_back(H->elem); inorder(H->right);}
		}
		T Max(node<T> *H) {return H->right?Max(H->right):H->elem;}
		T Min(node<T> *H) {return H->left?Min(H->left):H->elem;}
		bool remove(node<T> *&H,T x) //xoa duoc tra ve true, khong co tra ve false
		{
			if(!H) return 0;
			if(H->elem==x)
			{
				if(!H->left) {H=H->right; return 1;}
				else if(!H->right) {H=H->left; return 1;}
				H->elem=Max(H->left);
				return remove(H->left,H->elem);
			}
			return remove(ss(x,H->elem)?H->left:H->right,x);
		}
	public:
		typedef typename list<T>::iterator iterator;
		iterator begin() {L.clear(); inorder(root); return L.begin();}
		iterator end() {return L.end();}
		MSet() {n=0;root=0;}
		int size() {return n;}
		bool empty() {return n==0;}
		//void travel() {inorder(root);}
		void insert(T x)
		{
			n+=add(root,x);
		}
		void erase(T x)
		{
			//while(remove(root,x)) n--;
			n-=remove(root,x);
		}
};
int main()
{
	MSet <double ,greater<double> > T;
	double x,a[]= {35,13,74,63,62,15,63,17,13.7,46,34,35,72,83,45,81,27,63,16};
	for(double x:a) T.insert(x);
	cout<<"\nCay : "; for(auto it=T.begin();it!=T.end();it++) cout<<*it<<" ";
	do
	{
		cout<<"\nx = " ;cin>>x;
		T.erase(x);
		cout<<"\nsize : "<<T.size();
		cout<<"\nCay : "; for(auto x:T) cout<<x<<" ";
	}while(x>=0);
}


