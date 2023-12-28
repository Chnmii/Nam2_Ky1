#include <bits/stdc++.h>
using namespace std;

class ps
{
	long long t,m;
		void rutgon()
		{
			long long d=__gcd(t,m);
			t/=d; m/=d;
			if(m<0) {t=-t; m=-m;}
		}
		
	public:
		ps(int u=0, int v=1) {t=u; m=v; this->rutgon();}
		
		friend ostream &operator<<(ostream &os, ps p)
		{
			if (p.m == 1) os << p.t;
			else os << p.t << "/" << p.m << endl;
			return os;
		}
		
		friend istream &operator>>(istream &is, ps &p)
		{
			char c;
			is >> p.t >> c >> p.m;
			return is;
		}
		ps operator-()
		{
			ps a(-t,m);
			a.rutgon();
			return a;
		}
		ps operator+(ps p)
		{
			ps q(t*p.m + m*p.t);
			q.rutgon();
			return q; 
		}
		ps operator++()      // p++ : tang roi moi gan
		{
			t+=m;
			return ps(t,m);
		}
		ps operator++(int)    // ++p : gan roi moi tang
		{
			t+=m;
			ps q(t,m);
			q.rutgon();
			return q;
		}
};

int main()
{
	ps q; cin >> q;
	cout << q;
	ps p(6,-8);
	cout << p;
	cout << "\nphan so doi = " << -p;
	cout << "p+q = " << p+q;
	ps r = ++q; // r=p, p++
	cout << "\nr = " << r << "\np = " << q;
	
	// xuat ra file
	ofstream fout("abc.txt");
	fout << "\nDay la pso p = " << p;
	fout.close();
	
}
