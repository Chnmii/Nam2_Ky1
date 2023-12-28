#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={36,54,34,53,62,54,25,25,64,54,25,6,35,65,47,58,46},n=sizeof(a)/sizeof(a[0]);
	cout<<"\nday a:"; for(int i:a) cout<<i<<" ";
	make_heap(a,a+n);
	cout<<"\nday a:"; for(int i:a) cout<<i<<" ";
}


