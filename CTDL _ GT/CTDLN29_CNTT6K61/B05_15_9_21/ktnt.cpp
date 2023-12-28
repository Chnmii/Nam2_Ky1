#include<bits/stdc++.h>
using namespace std;
bool ktnt(int n)
{
	int d=0;
	for(int i=1;i<=n;i++) d+=n%i==0;
	return d==2;
}  //T(n)=2+3+6*n+2=6n+7 =O(n)
bool isprime(long long n)
{
	if(n==2) return 1;
	if(n<2 || n%2==0) return 0;
	for(long long i=3;i*i<=n;i+=2) if(n%i==0) return 0;
	return 1;
}
//2 <= T(n) < 1+4+2+6(sqrt(n)/2-1)+2 =O(n^0.5)
int main()
{
	int n=1e9+7;
	if(isprime(n)) cout<<"yes";
	else cout<<"no";
}


