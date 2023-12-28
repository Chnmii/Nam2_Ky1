#include<bits/stdc++.h>
using namespace std;
class day
{
	int d,m,y;   //thuoc tinh
	//cac phuong thuc
	public:
		void nhap();
		void xuat(){cout<<d<<"/"<<m<<"/"<<y;}
};
class abc
{
	public:void nhap();
};

void abc::nhap() {cout<<"\nThong bao k nhap gi\n";}
void day::nhap()
{
	char c;
	cin>>d>>c>>m>>c>>y;
}
int main()
{
	abc A; A.nhap();
//	day D; // D.nhap();
//	day *p=&D; p->nhap();  //nhap cho D;
	day N[100];
	for(day *p=N;p<N+3;p++) p->nhap();
	cout<<"\nCac ngay vua nhap : ";
	for(day *p=N;p<N+3;p++) {p->xuat(); cout<<"\t";}
}


