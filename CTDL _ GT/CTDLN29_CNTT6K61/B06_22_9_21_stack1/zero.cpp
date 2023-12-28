//tim duong di s den f
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int s=1234,f=0;
	cin>>s;
	stack<int> S;
	bool d[s+5]={};  //mang danh dau ban dau bang 0 het
	S.push(s); d[s]=1;
	while(S.size()) 
	{
		int u=S.top(); S.pop();  //lay u ra 
		for(int a=1;a*a<=u;a++)
		if(u%a==0)
		{
			int v=(a-1)*(u/a+1);
			if(v>=f && d[v]==0) {S.push(v); d[v]=1;}
		}
	}
	for(int i=0;i<=s;i++) if(d[i]) cout<<i<<" ";
}


