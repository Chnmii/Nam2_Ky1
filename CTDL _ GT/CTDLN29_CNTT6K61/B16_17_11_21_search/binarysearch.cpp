#include<bits/stdc++.h>
using namespace std;

template <class T>
T*search(T*L,T*R,T x)
{
	T*p=L,*q=R-1;
	while(p<=q)
	{
		T*r=p+(q-p)/2;
		if(*r==x) return r;
		x<*r?q=r-1:p=r+1;
	}
	return NULL;
}
template <class T>
T*bs(T*L,T*R,T x)   //binarysearch
{
	if(L>=R) return 0;
	T *p=L+(R-L)/2;
	if(*p==x) return p;
	if(x<*p) return bs(L,p,x);
	return bs(p+1,R,x);
}
int main()
{
	int a[]={12,53,54,83,62,16,62,37,48,89,57,60,96,81,30,36,70,75,47,75};
	int n=sizeof(a)/sizeof(a[0]);
	sort(a,a+n);
	cout<<"\nday : "; for(auto x:a) cout<<x<<" ";
	int *p=bs(a,a+n,60); 
	if(p) {*p=-1; cout<<"\nday : "; for(auto x:a) cout<<x<<" ";}
	else cout<<"\nKhong co 60";
}


