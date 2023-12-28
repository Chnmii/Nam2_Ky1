#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack< pair<int,int> > S;   //first-vi tri, second-giatri
	int n,x;
	cin>>n;
	S.push({0,INT_MAX});
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		while(S.top().second<=x) S.pop();
		cout<<i-S.top().first<<" ";
		S.push({i,x});
	}
}


