#include<bits/stdc++.h>
#include"dlist.cpp"
using namespace std;

class dt
{
	dlist<pair<int,double>> L;
	public:
		void nhap()
		{
			int m,b;
			double hs;
			cout<<"nhap so so hang : "; cin>>m;
			while(m--)
			{
				cin>>b>>hs;
				L.push_back({b,hs});
			}	
			L.sort();
		}
		void xuat()
		{
			for(auto it=L.rbegin();it!=L.rend();it++) 
			cout<<(it!=L.rbegin() && (*it).second>0?"+":"")<<(*it).second<<"*x^"<<(*it).first;
		}
};
int main()
{
	dt P;
	P.nhap();
	P.xuat();	

}


