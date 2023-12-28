#include<bits/stdc++.h>
using namespace std;
int main()
{

	int a=2148,b=24;
	while(a!=b)
	{
		a>b?a-=b:b-=a;
	}
	cout<<a;
}


