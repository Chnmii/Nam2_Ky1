// #include<bits/stdc++.h>
using namespace std;
void heapy(int *a,int n,int k) //vun dong tu vi tri k tren day a[0]->a[n-1] 
{
	if(2*k+1>=n) return;
	int p=2*k+1;
	if(p+1<n && a[p]<a[p+1]) p++;
	if(a[k]<a[p]) {swap(a[k],a[p]);heapy(a,n,p);}
}
void heapsort(int *a,int n)
{
	for(int i=n/2;i>=0;i--) heapy(a,n,i);  //tao dong
	for(int i=n-1;i>0;i--) 
	{
		swap(a[0],a[i]);
		heapy(a,i,0);
	}
}
template<class T,class Cmp>
void Heapy(T *L,T *R,T *k,Cmp ss) //vun dong tu k tren day *L...*(R-1) 
{
	int pos=k-L;
	T *p=k+pos+1;
	if(p>=R) return;
	if(p+1<R && ss(*p,*(p+1))) p++;
	if(ss(*k,*p)) {swap(*k,*p);Heapy(L,R,p,ss);}
}
template<class T,class Cmp=less<T> >
void Heapsort(T *L,T *R,Cmp ss=less<T>())
{
	for(T *i=R-1;i>=L;i--) Heapy(L,R,i,ss);  //tao dong
	for(T *i=R-1;i>L;i--) 
	{
		swap(*L,*i);
		Heapy(L,i,L,ss);
	}
}
int main()
{
	int a[]={36,54,34,53,62,54,25,25,64,54,25,6,35,65,47,58,46},n=sizeof(a)/sizeof(a[0]);
	cout<<"\nday a:"; for(int i:a) cout<<i<<" ";
//	heapsort(a,n);
	Heapsort(a,a+n,greater<int> ());
	cout<<"\nday a:"; for(int i:a) cout<<i<<" ";
}


