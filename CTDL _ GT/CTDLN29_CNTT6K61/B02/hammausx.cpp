//Ham mau
#include<bits/stdc++.h>
using namespace std;

template <class T,class K>
void sx(T *a,int n,K ss)
{
	for(int i=0;i<n;i++)
	for(int j=i+1;j<n;j++)
	if(ss(a[j],a[i])) swap(a[i],a[j]);
}

bool cmp(int a,int b){return a%2<b%2;}

int main()
{
	int a[]={4,7,2,8,1,6},n=6;
	sx(a,n,cmp);
	cout<<"\nSau khi sap "; for(auto x:a) cout<<x<<" ";
	double b[]={1.2,3.5,2.1,4.6},m=sizeof(b)/sizeof(double);
	sx(b,m,greater<double>());
	cout<<"\nSau khi sap "; for(auto x:b) cout<<x<<" ";
	
}


