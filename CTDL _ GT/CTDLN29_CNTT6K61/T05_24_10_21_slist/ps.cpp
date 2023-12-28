#include<bits/stdc++.h>
using namespace std;

class ps
{
	private: 
		int t,m;
		void rutgon();
	public:
		ps(int a=0,int b=1):t(a),m(b){}
		int get_t() {return t;}
		int get_m() {return m;}
		void set_t(int z=0) {t=z;}
		void set_m(int z=0) {m=z;}
		ps operator++(int)
		{
			ps q(t,m);
			t=t+m;
			return q;	
		}
};
int main()
{
	ps p,q;
	p.set_t(4);
	p.set_m(14);
	q=p++;  //q=p; p=p+1
	cout<<"\np: "<<p.get_t()<<"/"<<p.get_m();
	cout<<"\nq: "<<q.get_t()<<"/"<<q.get_m();
}


