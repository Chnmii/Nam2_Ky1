//thuat toan sap xep chen
#include<bits/stdc++.h>
using namespace std;

void insert_sort(int *a,int n) //sap a0->a[n-1]
{
	for(int i=1;i<n;i++)
	{
		int x=a[i];
		int j;
		for(j=i-1;j>=0 && x<a[j];j--) a[j+1]=a[j];
		a[j+1]=x;
	}
}

void insertsort(int *L,int *R) //sap *L,*(L+1)...*(R-1)
{
		
}
template<class T>
void insert(T *L,T *R) //sap *L,*(L+1)...*(R-1)
{
	
}
template<class T,class Cmp = less<T> >
void is(T *L,T *R,Cmp ss= less<T>()) //sap *L,*(L+1)...*(R-1)
{
	for(T *i=L+1;i<R;i++)
	{
		T x=*i;
		T *j;
		for(j=i-1;j>=L && ss(x,*j);j--) *(j+1)=*j;
		*(j+1)=x;
	}
}
int main()
{
	int a[]={42,234,523,63,474,48,646,4,64,636,36,25,46,436}, n=sizeof(a)/sizeof(a[0]);
	for(auto z:a) cout<<z<<" ";
//	insert_sort(a,n);
//	is(a,a+n);
	is(a,a+n,greater<int>() );
	cout<<"\n";
	for(auto z:a) cout<<z<<" ";
}


