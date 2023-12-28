#include<bits/stdc++.h>
using namespace std;

bool ss(int x,int y) {return (x-y)%2? abs(x%2)<abs(y%2): x<y;}
struct cmp
{
	bool operator()(int x,int y){return x>y;}
};

int main()
{
	int a[]={45,346,-54,5,163,-8,96,70,-253,54},n=sizeof(a)/sizeof(int);
	//sort(a+2,a+7,less<int>());  //sort a2-a6
	//sort(a,a+n,ss);  //sort day chan tang den le tang 
	sort(a,a+n,cmp);  //sap day dam
	for(int x:a) cout<<x<<" ";
}


