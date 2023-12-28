//
#include<bits/stdc++.h>
using namespace std;
#define bp(x) (x)*(x)
#define dt(x,y,z,t) (x)*(t)-(y)*(z)
class tg
{
	//private: 
	double xA,yA,xB,yB,xC,yC;
	public:
	void nhap()
	{
		cout<<"Nhap toa do cac dinh cua tam giac : ";
		cin>>xA>>yA>>xB>>yB>>xC>>yC;	
	}
	double chuvi()
	{
		double a=sqrt(bp(xB-xC)+bp(yB-yC));
		double b=sqrt(bp(xC-xA)+bp(yC-yA));
		double c=sqrt(bp(xA-xB)+bp(yA-yB));
		return a+b+c;
	}	
	double dientich()
	{
		return abs(dt(xA,yA,xB,yB)+dt(xB,yB,xC,yC)+dt(xC,yC,xA,yA))/2;
	}
};
int main()
{
//	tg T; T.nhap();
//	cout<<"\nChu vi tam giac "<<T.chuvi();
//	cout<<"\nDien tich tam giac "<<T.dientich();
	tg *p;
	p=new tg;
	p->nhap();
	cout<<"\nChu vi "<<p->chuvi();
	cout<<"\nDien tich "<<p->dientich();
	cout<<"Hoanh do cua A: "<<p->xA;
	
}


