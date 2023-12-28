#include<bits/stdc++.h>
using namespace std;

int tong(vector<int> Z)
{
	int t=0;
	for(auto x:Z) t+=x;
	return t;
}
int main()
{
	vector<int> V(3,5);
	vector<int> V1=V,V2;   //toan tu copy
	V2=V1;				   //toan tu gan		
	for(auto x:V2) cout<<x<<" ";
	cout<<"\nTong "<<tong(V2);
}


