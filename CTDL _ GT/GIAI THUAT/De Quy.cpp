#include <bits/stdc++.h>
using namespace std;

double mypow(double x, int n)
{
	if (n==0) return 1;
	return x*mypow(x,n-1);
}

long long gt(int n)
{
	return n?n*gt(n-1):1;
}

int main()
{
	// ham mu
	cout << mypow(2,10);
	
	// giai thua 	
	for(int k=0; k<10; k++)
		cout << gt(k) << "\n";
}

