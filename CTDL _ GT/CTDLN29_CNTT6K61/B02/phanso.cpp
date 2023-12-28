#include<bits/stdc++.h>
using namespace std;
struct ps
{
	int t,m;
};
istream &operator>>(istream &is,ps &p)
{
	char c;
	is>>p.t>>c>>p.m;
	return is;
}
ps operator+(ps p,ps q)
{
	ps r; r.t=p.t*q.m+p.m*q.t; r.m=p.m*q.m;
	return r;
}
ps operator++(ps &p)
{
	p.t+=p.m;
	return p;
}
ostream &operator<<(ostream &os,ps p) 
{
	os<<p.t<<"/"<<p.m;
	return os;
}
int main()
{
	ps p,q,r;
	cin>>p>>q;
	r=p+q;
	++r;
	cout<<"PS tong "<<r;
	cout<<"p+q+r"<<p+q+r;
}


