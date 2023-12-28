#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,n;
	long long res=1;
	cin>>x>>n;
	while(n)
	{
		if(n%2) res*=x;
		x=x*x;
		n=n/2;
	}
	cout<<res;
}
//O(logn) 


