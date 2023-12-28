#include <bits/stdc++.h>
using namespace std;

class day
{
	int d,m,y;
	public:
		void nhap();
		void xuat(){ cout << d << "/" << m << "/" << y;}
};

void day::nhap()
{
	cin >> d >> m >> y;
}

int main()
{
	day D;
	//D.nhap();
	day *p = &D;
	p->nhap(); // nhap cho D
	
	day N[100];
	for (day *p=N; p < N+3; p++) p->nhap(); // nhap N[0],N[1],N[2]
	cout << "Cac ngay vua nhap: ";
	for (day *p=N; p < N+3; p++) p->xuat();
}
