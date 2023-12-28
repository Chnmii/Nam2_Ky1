#include <bits/stdc++.h>
using namespace std;

void nhap(double x[], double y[], int t)
{
	cout << "Nhap cac moc noi suy:\n";
	for (int i=0; i<=t; i++)
	{
		cout << "Moc noi suy thu " << i << ": ";
		cin >> x[i] >> y[i];
	}
}

double lagrange(double x[], double y[], int t, double x0)
{
	double L=1, P=0;
	for (int i=0; i<=t; i++)
	{
		for (int j=0; j<=t; j++)
		{
			if (i!=j)
				L*= (x0-x[j])/(x[i]-x[j]);
			
		}
		P += L * y[i];
	}
	return P;
}

int main()
{
	int n;
	double x[50], y[50], xs;
	cout << "Nhap so moc noi suy: "; 
	cin >> n;
	cout << "Nhap x* = "; 
	cin >> xs;
	nhap(x, y, n);
	cout << "P(x*) = " << lagrange(x, y, n, xs);
	
	return 0;
}
