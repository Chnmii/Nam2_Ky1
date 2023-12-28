#include<bits/stdc++.h>
using namespace std;

double mypow(double x,int n)
{
	if(n==0) return 1;
	return x*mypow(x,n-1);		
}
//T(n)=O(n)
//T(0) = 2
//T(n) = c +T(n-1) = 2*c+T(n-2) = .... =nc+T(0)= cn+2 = O(n)

int main()
{
	cout<<mypow(2,10);
}


