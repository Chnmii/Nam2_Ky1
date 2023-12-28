#include <bits/stdc++.h>
using namespace std;

class ps
{
	int t,m;
	public:
		ps(int a=0, int b=1) // ham tao = cau tu
		{
			t=a;
			m=b;
		}
		void set_t(int a) {t=a;}
		void set_m(int a) {m=a;}
		int get_t() {return t;}
		int get_m() {return m;}
		void xuat() {if (m!=1)  cout << t << "/" << m; else cout << t;}
};

int main()
{
	ps p;
//	p.set_t(5);
//	p.set_m(8);
//	cout << p.get_t() << "/" << p.get_m();
	ps t(4,6); // p = 4/6
	ps q(5);   // q = 5/1
	ps r;      // r=0/1
	r.xuat();
	cout << "\np = " ; t.xuat();
	r = ps(4,5); r.xuat();
	p=2; // binh thuong ko co ham tao ko gan dc, o day co ep kieu p=ps(2)
	cout << "\np = "; p.xuat();
}
