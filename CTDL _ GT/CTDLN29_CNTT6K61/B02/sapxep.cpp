//ham co doi la ham
#include<bits/stdc++.h>
using namespace std;

//sap xep chan truoc le sau, tang dan

bool ss(int a,int b)
{
	if(a%2==b%2) return a<b;
	return a%2<b%2;
}
bool cmp(int a,int b) {return a>b;}

void sapxep(int *a,int n,bool f(int,int))
{
	for(int i=0;i<n;i++)
	for(int j=i+1;j<n;j++)
	if(f(a[j],a[i])) swap(a[i],a[j]);
}
int main()
{
	int a[]={42,543,54,776,869,91,520,58,112},n=sizeof(a)/sizeof(int);
	sapxep(a,n,ss); cout<<"\nday chan le :"; for(auto x:a) cout<<x<<" ";
	sapxep(a,n,cmp); cout<<"\nday giam :"; for(auto x:a) cout<<x<<" ";
}


