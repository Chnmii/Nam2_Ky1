#include <bits/stdc++.h>
using namespace std;

void nhap(double x[], double y[], int &n, double &xs)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap x*: ";
	cin >> xs;
	cout << "Nhap cac gia tri x[i], y[i]:\n";
	for (int i = 0; i <= n; i++)
	{
		cout << "Moc noi suy thu " << i << ": ";
		cin >> x[i] >> y[i];
	}
}

double Newton(double y[], double x[], int n, double xs)
{
	double P = y[0], k = 1, D[50];
	for (int i = 0; i <= n; i++)
	{
		D[i] = y[i];
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j=0; j <= n-i; j++)
		{
			D[j] = (D[j+1] - D[j]) / (x[j+i] - x[j]);
		}
		k *= (xs - x[i-1]);
		P += k*D[0];
	}
	return P;
}

int main()
{
	int n;
	double x[50], y[50], xs;
	nhap(x, y, n, xs);
	cout << "f(" << xs << ") = " << setprecision(3) << fixed << Newton(y, x, n, xs);
	
	return 0;
}
