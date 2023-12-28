#include<bits/stdc++.h>
using namespace std;

bool ktcp(int n)  //16,100
{
	if(n<0) return 0;
	if(n%3==2 || n%4>=2) return 0;
	int L=0,R=n,M;
	while(L<=R)
	{
		M=(L+R)/2;
		if(M*M==n) return true;
		M*M>n?R=M-1:L=M+1;
	}
	return false;
}
//  2 <= T(n)<<  n -> n/2 -> n/4 -> n/8 -->n/2^k = 1 ->k=log(n)
//T(n)=O(logn)
int main()
{
	for(int i=0;i<1000;i++) if(ktcp(i)) cout<<i<<" ";	
}


