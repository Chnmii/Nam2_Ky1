#include <bits/stdc++.h>
using namespace std;

void nhap(double &a, double &b, double &ex)
{
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap hang so epsilon: ";
	cin >> ex;
}

double f(const double &x)
{
	return (pow(x, 3) - 8);
}

double daoham(const double &x, const double &ex)
{
	return (f(x+ex) - f(x)) / ex;
}

double gpt(double a, double b, double ex)
{
	double x0;
 	if (f(a)>0)
 		x0 = a;
	else 
		x0 = b;
	double x1 = x0 - (f(x0)/daoham(x0, ex));
	int i = 0;
	while (abs(x1-x0)>ex && i<100)
	{
		x0 = x1;
		x1 = x0 - (f(x0)/daoham(x0, ex));
		i++;
	}
	return x1;
}

int main()
{
	double a, b, e;
	nhap(a, b, e);
	cout << "Nghiem cua f(x) = " << gpt(a, b, e);
}


