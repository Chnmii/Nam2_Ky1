#include <bits/stdc++.h>
using namespace std;

void nhap(double y[], int n)
{
	cout << "Nhap cac gia tri y[i]:\n";
	for (int i=0; i<=n; i++)
	{
		cout << "Moc noi suy thu " << i << ": ";
		cin >> y[i];
	}
}

double NewtonTien(double y[50], int n, double t)
{
	double P, k=t, D[50];
	for (int i=1; i<=n; i++)
	{
		D[i] = y[i+1] - y[i];
	}
	P = y[0] + t*D[0];
	for (int j=2; j<=n; j++)
	{
		for (int i=0; i<=n-j; i++)
		{
			D[i] = D[i+1] - D[i];
		}
		k *= (t-j+1)/j;
		P += k*D[0];
	}
	return P;
}

int main()
{
	int n;
	double x0,x1,xs,t,y[50];
	cout << "Nhap so moc noi suy: "; 
	cin >> n;
	cout << "Nhap moc noi suy x0, x1: "; 
	cin >> x0 >> x1;
	cout << "Nhap x* = "; 
	cin >> xs;
	t = (xs-x0)/(x1-x0);
	nhap(y,n);
	cout << "f(x*) = " << NewtonTien(y,n,t);
	
	return 0;
}
