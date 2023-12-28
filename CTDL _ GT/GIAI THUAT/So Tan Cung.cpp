#include <bits/stdc++.h>
using namespace std;

long long M=1e3;

long long fun(long long a, long long n)
{
	if (n==0) return 1;
	if(n%2) return a*fun(a*a%M, n/2)%M;
	return fun(a*a%M, n/2)%M;
}

int main()
{
	long long a,n;
	cin >> a >> n;
	a%=M;
	printf("%.3lld", fun(a,n));
	
}

