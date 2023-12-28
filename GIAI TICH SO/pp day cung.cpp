#include<bits/stdc++.h>
using namespace std;

void nhap(double &a, double &b, double &e)
{
    cout << "Nhap a: "; cin >> a;
	cout << "Nhap b: "; cin >> b;
	cout << "Nhap e: "; cin >> e;
}

double f(double &x)
{
	return pow(x,3) - 8; 
} 

double sol(double a, double b, double e)
{
	double x0, x1;
	if(f(a) < 0)
		swap(a,b);
	else
		x0 = b;
	
	x1 = x0 - (f(x0) / (f(a) - f(x0))) * (a - x0);
		while(abs(x1-x0) > e)
		{
			x0 = x1;
			x1 = x0 - (f(x0) * (a - x0) / (f(a) - f(x0)));
		}
		return x1;
}
 
int main()
{
	double a,b,e;
	nhap(a,b,e);
	cout << "Kq = " << sol(a,b,e); 
}

