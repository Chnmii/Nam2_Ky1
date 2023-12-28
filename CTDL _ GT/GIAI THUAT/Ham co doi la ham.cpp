#include <bits/stdc++.h>
using namespace std;

double fun(double *a, int n, double f(double)) // day a co kieu T co n phan tu
{
	double s=0;
	for (int i=0; i<n; i++)
	{
		s += f(a[i]);
	}
	return s;
}

double bp(double x) {return x*x;}

int main()
{
	double a[]={4,7,2,8,5};
	int n = sizeof(a)/sizeof(a[0]);
	cout << "Tong cac can bac hai: " << fun(a,n,sqrt);
	cout << "\nTong cac sin: " << fun(a,n,sin);
	cout << "\nTong cac binh phuong: " << fun(a,n,bp);
	cout << "\nTong cua day: " << fun(a,n,[](double x) {return x+1;});
}

