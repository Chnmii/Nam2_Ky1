//xay dung lop phan so
#include<bits/stdc++.h>
using namespace std;

class ps
{
	long long t,m;
		void rutgon()
		{
			long long d=__gcd(t,m); 
			t/=d;m/=d; 
			if(m<0) {t=-t;m=-m;}
			//return ps(t,m);
		}
	public:
		ps(int u=0,int v=1) {t=u;m=v;this->rutgon();}
		friend ostream& operator<<(ostream &os,ps p)
		{
			if(p.m==1) os<<p.t;
			else os<<p.t<<"/"<<p.m;
			return os;
		}
		friend istream& operator>>(istream &is,ps &p);		
		ps operator-()
		{
			ps x(-t,m);x.rutgon();
			return x;
		}
		ps operator+(ps p)
		{
			ps q(t*p.m+m*p.t,p.m*m); q.rutgon();
			return q;
		}
		ps operator++()   //++p
		{
			t+=m;
			return ps(t,m);	
		}
		ps operator++(int) //p++
		{
			ps p=ps(t,m);
			t+=m;
			return p;
		}
};
istream& operator>>(istream &is,ps &p)
{
	char c;
	is>>p.t>>c>>p.m; //                    3/4
	p.rutgon();
	return is;
}
int main()
{
	ps p(1,2),q(2,3),r(2,6);
	cout<<p<<"\n";
//	ofstream fout("abc.txt"); 
//	fout<<"\nDay la phan so p = "<<p<<" tuyet qua "<<100<<" lan"; 
//	fout.close();
//	cout<<"\nNhap p= ";
//	cin>>p; cout<<"\nPS sau khi nhap "<<p<<"\n";
	cout<<"\nPhan so doi "<<-p;
	cout<<"\np+q+r = "<<p+q+r;
	r=++p;
	cout<<"\nr = "<<r<<"\np = "<<p;
}


