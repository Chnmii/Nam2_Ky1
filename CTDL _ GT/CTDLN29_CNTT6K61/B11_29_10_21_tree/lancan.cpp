//lan can
#include<bits/stdc++.h>
using namespace std;
int main()
{
	unordered_map<int,int> A;
	int n,m,x,res=0;
	cin>>n>>m; 
	while(n--) {cin>>x; A[x]++;}
	while(m--) {cin>>x; if(A[x]>0) res++,A[x]--; }
	cout<<res;
}


