#include<bits/stdc++.h>
using namespace std;

long long F(int n)
{
	if(n==0 or n==1) return 1;
	return F(n-1)+F(n-2);
}
int main()
{
	for(int i=0;i<=10;i++) cout<<i<<" : "<<F(i)<<"\n";
	
	cout<<"F[43]="<<F(43);

}


