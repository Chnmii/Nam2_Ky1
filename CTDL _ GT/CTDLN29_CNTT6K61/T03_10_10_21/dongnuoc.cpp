//Dong nuoc
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> TT;
map<TT,TT> P;  
void path(TT f)
{
	if(f.first+f.second==0) cout<<"(0,0)";
	else {path(P[f]); cout<<"->("<<f.first<<","<<f.second<<")";}
}
int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	queue<TT>Q;
	map<TT,int> M;
	Q.push({0,0});
	M[{0,0}]=1;
	while(Q.size())
	{
		TT u=Q.front(); Q.pop();
		int x=u.first,y=u.second,z=x+y;
		TT Next[6]={{0,y},{x,0},{n,y},{x,m},{max(0,z-m),min(z,m)},{min(z,n),max(0,z-n)}};
		for(TT v:Next)
		if(not M[v])
		{
			M[v]=M[u]+1;
			P[v]=u;
			Q.push(v);
			if(v.first==k || v.second==k) {cout<<M[u]<<"\n"; path(v);return 0;}
		} 
	}
	cout<<"Khong dong duoc nuoc";
}


