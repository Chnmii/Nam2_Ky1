#include<bits/stdc++.h>
using namespace std;
int tach(int n,string p="\n")
{
	if(n%2 ||n<5) {cout<<p<<n; return 1;}
	int u=tach(n/2-2,p+"\t");
	cout<<p<<n;
	return u+tach(n/2+2,p+"\t");
}
int main()
{
	cout<<"\nSo nhom : "<<tach(60);

}


