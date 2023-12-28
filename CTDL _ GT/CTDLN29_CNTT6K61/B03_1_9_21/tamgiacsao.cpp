#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(i=a;i<=b;i++)
int main()
{
	int i,j;
	FOR(i,1,10)
	{
		FOR(j,1,i) //for(int j=1;i<=i;j++)
		cout<<"*";		
		cout<<"\n";
	}
}


