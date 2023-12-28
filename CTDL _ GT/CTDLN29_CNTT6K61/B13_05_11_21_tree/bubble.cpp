//thuat toan sap xep noi bot
#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int *a,int n) //sap a0->a[n-1]
{
	
	for(int i=0;i<n;i++)
	{
		bool ok=1;
		for(int j=n-1;j>i;j--) 
		if(a[j]<a[j-1]) swap(a[j],a[j-1]),ok=0;
		if(ok) break;
	}	
}

void bubblesort(int *L,int *R) //sap *L,*(L+1)...*(R-1)
{
	for(int *i=L;i<R;i++)
	for(int *j=R-1;j>L;j--) 
	if(*j<*(j-1)) swap(*j,*(j-1));	
}
template<class T>
void bubble(T *L,T *R) //sap *L,*(L+1)...*(R-1)
{
	for(T *i=L;i<R;i++)
	for(T *j=R-1;j>L;j--) 
	if(*j<*(j-1)) swap(*j,*(j-1));	
}
template<class T,class Cmp = less<T> >
void bs(T *L,T *R,Cmp ss= less<T>()) //sap *L,*(L+1)...*(R-1)
{
	for(T *i=L;i<R;i++)
	for(T *j=R-1;j>L;j--) 
	if(ss(*j,*(j-1))) swap(*j,*(j-1));	
}
int main()
{
	int a[]={42,234,523,63,474,48,646,4,64,636,36,25,46,436}, n=sizeof(a)/sizeof(a[0]);
	for(auto z:a) cout<<z<<" ";
	bs(a+5,a+9);
//	bs(a+5,a+9,greater<int>() );
	cout<<"\n";
	for(auto z:a) cout<<z<<" ";
}


