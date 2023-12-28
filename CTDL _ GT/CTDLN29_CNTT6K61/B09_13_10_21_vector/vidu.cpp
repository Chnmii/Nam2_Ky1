#include<bits/stdc++.h>
#include"vector.cpp"
using namespace std;
int main()
{
	Vector<double> V;  //rong
	int n;
	cin>>n;
	V.resize(n,0);   //cap va num mo rong thanh
	for(auto &x:V) cin>>x;
	
	cout<<"\nXuat : "; for(auto v:V) cout<<v<<" ";

}


