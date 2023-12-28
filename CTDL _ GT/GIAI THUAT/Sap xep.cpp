#include <bits/stdc++.h>
using namespace std;

// sx chan trc le sau, tang dan
bool ss(int a, int b)
{
	if(a%2==b%2) return a<b;
	return a%2<b%2;
}

void sx(int *a, int n)
{
	for (int i=0; i<n; i++)
		for (int j=i+1; j<n; j++)
			if(ss(a[j], a[i])) 
				swap(a[i], a[j]);
}

main()
{
	int a[]={5,8,19,4,6,109}, n=sizeof(a)/sizeof(int);
	sx(a,n);
	for (auto x:a)
		cout << x << " ";
}

