//luy thua
#include<bits/stdc++.h>
using namespace std;

//2^100 -> 4^50 -> 16^25 -> 16*(256^12) 

long long POW(long long x,int n)
{
	if(n==0) return 1;
	return n%2?x*POW(x*x,n/2):POW(x*x,n/2);
}
//T(n) =T(n/2)+c=T(n/4)+2c =... T(n/2^k)+kc =T(1)+kc =T(1)+clogn = O(logn)
long long luythua(long long x,int n)
{
	if(n==0) return 1;
	long long t=luythua(x,n/2);
	return n%2?x*t*t:t*t;
}
int main()
{
	cout<<luythua(2,10);
}


