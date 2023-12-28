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

double NewtonLui(double y[50], int n, double x, double xn, double h)
{
	double P = y[n], t=(x-xn)/h, T=1, D[50];
	for (int i=1; i<=n; i++)
	{
		D[i] = y[i];
	}
	for (int i=1; i<=n; i++)
	{
		for (int j=0; j<=n-i; j++)
		{
			D[j] = D[j+1] - D[j];
		}
		T *= (t+i-1)/i;
		P += T*D[n-i];
	}
	return P;
}

int main()
{
	int n;
	double xn,xs,y[50];
	cout << "Nhap so moc noi suy: "; 
	cin >> n; 
	cout << "Nhap lan luot xn,h: ";
	cin  >> xn >> h;
	cout << "Nhap x* = "; 
	cin >> xs;
	nhap(y,n);
	cout << "f(x*) ~ " << NewtonLui(y,n,xs,xn,h);
	
	return 0;
}
