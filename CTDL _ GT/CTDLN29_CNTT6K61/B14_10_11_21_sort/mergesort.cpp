#include<bits/stdc++.h>
using namespace std;

//void merge_sort(int *a,int L,int R,int *b,int *c)
//{
//	if(L>=R-1) return;
//	int M=(L+R)/2;    
//	merge_sort(a,L,M,b,c);
//	merge_sort(a,M,R,b,c);
//	int *i=b,*j=c;
//	for(int z=M-1;z>=L;z--) *i++=a[z]; i--;
//	for(int z=R-1;z>=M;z--) *j++=a[z]; j--;
//	for(int z=L;z<R;z++) 
//	if(i>=b && j>=c) a[z]=*i<*j?*i--:*j--;
//	else a[z]=i>=b?*i--:*j--;
//}
//void mergesort(int *a,int L,int R)
//{
//	int *b=new int[R-L+5];
//	int *c=new int[R-L+5];
//	merge_sort(a,L,R,b,c);
//	delete []b;
//	delete []c;
//}

template<class T,class Cmp>
void Merge_Sort(T *L,T*R,T *b,T *c,Cmp ss)
{
	if(L>=R-1) return;
	T *M=L+(R-L)/2;    
	Merge_Sort(L,M,b,c,ss);
	Merge_Sort(M,R,b,c,ss);
	T *i=b,*j=c,*z;
	for(z=M-1;z>=L;z--) *i++=*z; i--;
	for(z=R-1;z>=M;z--) *j++=*z; j--;
	for(z=L;z<R;z++) 
	if(i>=b && j>=c) *z=ss(*i,*j)?*i--:*j--;
	else *z=i>=b?*i--:*j--;
}
template<class T,class Cmp=less<T> >
void MergeSort(T *L,T *R,Cmp ss=less<T>())
{
	T *b=new T[R-L+5];
	T *c=new T[R-L+5];
	Merge_Sort(L,R,b,c,ss);
	delete []b;
	delete []c;
}


int main()
{
	double a[]={42,234,523,63,474,48,646,4,64,636,36.4,25,46,436};
//	int a[]={42,23,40,11};
	int n=sizeof(a)/sizeof(a[0]);
	for(auto z:a) cout<<z<<" ";
	MergeSort(a,a+n);
//	MergeSort(a,a+n);
	cout<<"\n";
	for(auto z:a) cout<<z<<" ";
}

