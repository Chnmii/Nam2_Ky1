//thang may
#include<bits/stdc++.h>
using namespace std;
map<int,int> P;  //duong di
void induong(int s,int f)
{
	if(s==f) cout<<s;
	else {induong(s,P[f]); cout<<"->"<<f;}
}
int main()
{
	int n,k,m,s,f;
	cin>>n>>k>>m>>s>>f;
	map<int,int> M;  //do sau

	queue<int> Q;
	Q.push(s); M[s]=1;
	while(Q.size() && M.find(f)==M.end())
	{
		int u=Q.front(); Q.pop();
		if(u+k<=n && M.find(u+k)==M.end()) {M[u+k]=M[u]+1; Q.push(u+k); P[u+k]=u;}
		if(u-m> 0 && M.find(u-m)==M.end()) {M[u-m]=M[u]+1; Q.push(u-m); P[u-m]=u;}
	}
	cout<<M[f]-1;
	if(M[f]) {cout<<"\n"; induong(s,f);}
}


