//thuat toan sap xep chon
#include<bits/stdc++.h>
using namespace std;

void select_sort(int *a,int n) //sap a0->a[n-1]
{
	for(int i=0;i<n;i++)
	{
		int p=i;
		for(int j=i+1;j<n;j++) if(a[j]<a[p]) p=j;
		swap(a[i],a[p]);
	}
}

void selectsort(int *L,int *R) //sap *L,*(L+1)...*(R-1)
{
		
}
template<class T>
void select(T *L,T *R) //sap *L,*(L+1)...*(R-1)
{
	
}
template<class T,class Cmp = less<T> >
void ss(T *L,T *R,Cmp cmp= less<T>()) //sap *L,*(L+1)...*(R-1)
{
	for(T *i=L;i<R;i++)
	{
		T *p=i;
		for(T *j=i+1;j<R;j++) if(cmp(*j,*p)) p=j;
		swap(*i,*p);
	}
}
int main()
{
	int a[]={42,234,523,63,474,48,646,4,64,636,36,25,46,436}, n=sizeof(a)/sizeof(a[0]);
	for(auto z:a) cout<<z<<" ";
//	select_sort(a,n);
//	ss(a+5,a+9);
	ss(a+5,a+9,greater<int>() );
	cout<<"\n";
	for(auto z:a) cout<<z<<" ";
}


