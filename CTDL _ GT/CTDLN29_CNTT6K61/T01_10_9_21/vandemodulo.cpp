#include<bits/stdc++.h>

//cho a,b,m tim a^b mod m = (a%m) ^ b mod m
using namespace std;
#define LL unsigned long long

LL multt(LL a,LL b,LL M)
{
//	if(log10(a)+log10(b)<17) return a*b%M;
//	if(a>b) swap(a,b);
//	LL c=sqrt(b);    //b=c*q+r   -> a*b = a*c*q  + a*r 
//	return (multt(a*c%M,b/c,M)+multt(a,b%c,M))%M;
	if(b==0) return 0;
	if(b==1) return a%M;
	return b%2?(multt(a*2%M,b/2,M)+a)%M:multt(a*2%M,b/2,M);
}
void test()
{
	string x;
	LL a=0,b,M,t=1;       //tinh a=x%M
	cin>>x>>b>>M;
	for(char c:x) a=(a*10+c-'0')%M;     //tinh a^b%M;
	while(b)
	{
		if(b%2) t=multt(a,t,M); 
		b/=2; 
		a=multt(a,a,M);
	}
	cout<<t<<"\n";
}
int main()
{
	int t;
	cin>>t;
	while(t--) test();
}



