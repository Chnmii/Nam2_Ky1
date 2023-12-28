#include<bits/stdc++.h>
using namespace std;

void sx(int *a,int n,bool tang=1)
{
	for(int i=0;i<n;i++)
	for(int j=i+1;j<n;j++)
	if(a[i]>a[j]==tang) swap(a[i],a[j]);
}

int main()
{
	int a[]={5,7,3,5,4,7,2,8},n=sizeof(a)/sizeof(int);
	sx(a,n);
	cout<<"\nDay sau khi sx : ";
	for(int x:a) cout<<x<<" ";
}


