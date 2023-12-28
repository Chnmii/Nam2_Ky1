#include <bits/stdc++.h>
using namespace std;

#define in(x) {cout << "Nhap " << #x << " = "; cin >> x;}
#define bp(x) (x)*(x)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define dt(x,y,z,t) (x)*(t)-(y)*(z) // dien tich tam giac

double dientich(tg T)
{
	return abs(dt(T.xA,T.T.yA,T.xB,T.T.yB) + dt(T.xB,T.yB,T.xC,T.yC) + dt(T.xC,T.yC,T.xA,T.yA))/2;
}

double chuvi(tg T)
{
	double a = sqrt(bp(T.xB-T.xC) + bp(T.yB-T.yC));
	double b = sqrt(bp(T.xC-T.xA) + bp(T.yC-T.yA));
	double c = sqrt(bp(T.xA-T.xB) + bp(T.yA-T.yB));
	return a+b+c;
}

int main()
{
	double anh, be; int x, y, z;
	in(anh); in(be);
	cout << bp(5);
	in(x); in(y); in(z);
	
	FOR(i,1,10)
	{
		FOR(j,1,i) cout << "*";
		cout << "\n";
	}
	
	// tinh dien tich, chu vi tam giac biet toa do 3 diem
	cout << "Dien tich htg = " << dientich(T);
	cout << "Chu vi htg = " << chuvi(T);
}
