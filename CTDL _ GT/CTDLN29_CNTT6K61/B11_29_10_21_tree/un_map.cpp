//
#include<bits/stdc++.h>
using namespace std;
int main()
{
	unordered_map<int,int> T;
	int a[]={42,5,63,74,85,85,8,79,808,54,37,6,25,1,517,16,347,42,85};
	for(int x:a) T[x]++;
	for(auto x:T) cout<<x.first<<" "<<x.second<<"\n";

}


