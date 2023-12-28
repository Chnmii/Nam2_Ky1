//ham mau
#include<bits/stdc++.h>
using namespace std;
template <class T,class K>
T fun(T *a,int n,K f)   //day a co kieu T co n phan tu a[0]->a[n-1]
{
	T s=0;
	for(int i=0;i<n;i++) s+=f(a[i]);
	return s;
}
//double bp(double x) {return x*x;}
struct bp
{
	double operator()(double x) {return x*x;}
};
int main()
{
	double a[]={4,7,2,8,5};
	int n=sizeof(a)/sizeof(a[0]);
//	cout<<"\nTong cac can "<<fun(a,n,sqrt); 
//	cout<<"\nTong cac sin "<<fun(a,n,sin); 
	cout<<"\nTong cac bp "<<fun(a,n,bp() ); 
//	cout<<"\nTong cac day "<<fun<double>(a,n,[](double x){return x+1;}); //lambda trong C++11
//	int b[]={3,7,2,1};
//	cout<<"\nTong b "<<fun<int>(b,4,[](int z){return z*z;});
	bp f;
	cout<<"\n"<<f(7.5);
}


