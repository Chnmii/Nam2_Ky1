#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long x,n,M=1000,res=1;
	cin>>x>>n;
	x%=M;
	while(n)
	{
		if(n%2) res=res*x%M;
		x=x*x%M;
		n=n/2;
	}
	printf("%.3lld",res);
}
//O(logn) 


