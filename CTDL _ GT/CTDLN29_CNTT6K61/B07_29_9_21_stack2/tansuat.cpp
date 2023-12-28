#include<bits/stdc++.h>
using namespace std;
int main()
{
	//tan suat;
	//unordered_map<int,int> M;  //khong sap tang dan theo key
	map<int,int> M;				 //duoc sap tang dan theo key	
	int n,x;
	cin>>n;
	while(n--) {cin>>x; M[x]++;}
	for(auto x:M) cout<<x.first<<" "<<x.second<<"\n";

}


