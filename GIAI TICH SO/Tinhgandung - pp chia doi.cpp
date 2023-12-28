#include <bits/stdc++.h>
using namespace std;

void nhap(double &a, double &b, double &ex)
{
	cout << "Nhap a: "; cin >> a;
	cout << "Nhap b: "; cin >> b;
	cout << "Nhap e: "; cin >> ex;
}

double f(double x)
{
	return pow(x,5)-x-0.2;
}

double tinh(double a, double b, double ex)
{
	double c = (a+b)/2;
	double t = fabs(b-a);
	while (t > ex)
	{
		if (f(a)*f(c) < 0)  return b=c;
		else  return a=c;
		c = (a+b)/2;
	}
	return c;
}

int main()
{
	double a,b,ex;
	nhap(a,b,ex);
	cout << "KQ = " << setprecision(5) << fixed << tinh(a,b,ex);
}

