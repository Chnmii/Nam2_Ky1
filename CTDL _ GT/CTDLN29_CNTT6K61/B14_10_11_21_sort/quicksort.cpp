#include<bits/stdc++.h>
using namespace std;

void quick_sort(int *a,int L,int R) //sap day a tu a[L]...a[R-1]
{
//	if(L>=R-1) return;
//	int x=a[(L+R-1)/2];
//	int i=L,j=R-1;
//	while(i<=j)
//	{
//		while(i<=j && a[i]<x) i++;
//		while(i<=j && x<a[j]) j--;
//		if(i<=j) {swap(a[i],a[j]);i++;j--;}
//	}
//	quick_sort(a,L,i);
//	quick_sort(a,i,R);
	if(L>=R-1) return;
	swap(a[L],a[(L+R-1)/2]);
	int i=L;
	for(int j=L+1;j<R;j++)
	if(a[j]<a[L])  swap(a[++i],a[j]);
	swap(a[i],a[L]);
	quick_sort(a,L,i);
	quick_sort(a,i+1,R);
}
template<class T,class Cmp=less<T> >
void quicksort(T *L,T *R,Cmp ss=less<T>()) //sap day tu vi tri con tro L den con tro R-1
{
	if(L>=R-1) return;
	T x=*(L+(R-1-L)/2);
	T *i=L,*j=R-1;
	while(i<=j)
	{
		while(i<=j && ss(*i,x)) i++;
		while(i<=j && ss(x,*j)) j--;
		if(i<=j) {swap(*i,*j);i++;j--;}
	}
	quicksort(L,i,ss);
	quicksort(i,R,ss);
}
int main()
{
	int a[]={42,234,523,63,474,48,646,4,64,636,36,25,46,436};
//	int a[]={42,42,42,42,42,42,42,42,42,42,42};
	int n=sizeof(a)/sizeof(a[0]);
	for(auto z:a) cout<<z<<" ";
	quicksort(a,a+n,greater<int>());
	cout<<"\n";
	for(auto z:a) cout<<z<<" ";
}


