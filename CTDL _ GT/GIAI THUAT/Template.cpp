// ham mau
#include <bits/stdc++.h>
using namespace std;

template <typename T, class K>
// template <class T>
void sx(T *a, int n, K ss)
{
	for (int i=0; i<n; i++)
		for (int j=i+1; j<n; j++)
			if (ss(a[j],a[i])) swap(a[i],a[j]);
}

bool cmp(int a, int b)
{
	return a%2<b%2;
}

struct bp
{
	double operator()(double x) {return x*x;}	
};

int main()
{
	int a[]={5,9,10,3,12,6}, n=6;
	sx(a,n,cmp);
	cout << "Sau khi sap xep: "; 
	for (auto x:a) cout << x << " ";
	
	double b[]={1.2,5.9,9.8,6.7}, m=sizeof(b)/sizeof(double);
	sx(b, m, greater<double>()); // sx giam dan
	cout << "\nSau khi sap xep: "; 
	for (auto x:b) cout << x << " ";
	
	bp f;
	cout << "\n" << f(7.5);
	return 0;
}
