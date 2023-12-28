#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={4,7,18,29,35,42,42,42,42,56,63,71,84,90},n=sizeof(a)/sizeof(int);
	int x=42;
	int *p=lower_bound(a,a+n,x);   //chi ra vi tri dau tien >=x
	int *q=upper_bound(a,a+n,x);   //chi ra vi tri dau tien >x
	cout<<"\nlower : "<<p-a;
	cout<<"\nupper : "<<q-a;

}


