//
#include<bits/stdc++.h>
using namespace std;
#define bp(x) (x)*(x)
#define dt(x,y,z,t) (x)*(t)-(y)*(z)
struct tg
{
	double xA,yA,xB,yB,xC,yC;
};
void nhap(tg&T)
{
	cout<<"Nhap toa do cac dinh cua tam giac : ";
	cin>>T.xA>>T.yA>>T.xB>>T.yB>>T.xC>>T.yC;	
}
double chuvi(tg T)
{
	double a=sqrt(bp(T.xB-T.xC)+bp(T.yB-T.yC));
	double b=sqrt(bp(T.xC-T.xA)+bp(T.yC-T.yA));
	double c=sqrt(bp(T.xA-T.xB)+bp(T.yA-T.yB));
	return a+b+c;
}
double dientich(tg T)
{
	return abs(dt(T.xA,T.yA,T.xB,T.yB)+dt(T.xB,T.yB,T.xC,T.yC)+dt(T.xC,T.yC,T.xA,T.yA))/2;
}
int main()
{
	tg T; nhap(T);
	cout<<"\nChu vi tam giac "<<chuvi(T);
	cout<<"\nDien tich tam giac "<<dientich(T);
}


