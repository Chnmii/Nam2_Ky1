#include <bits/stdc++.h>
using namespace std;

class ps     // moi class deu co con tro this
{
	int t,m;
	public:
		ps(int t=0, int m=1)
		{
			this->t = t;
			this->m = m;
		}
		void xuat() {cout << t << "/" << m;}
		void f() {this->t=this->t+this->m;}
		void cong(int k)
		{
			while(k--) this->f();
		}
};

int main()
{
	ps p(2,3);
	p.xuat();
	p.cong(10);
	p.xuat();
}
