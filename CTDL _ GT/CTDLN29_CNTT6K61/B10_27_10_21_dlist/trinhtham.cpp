#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,x;
	cin>>n>>k;
	list< pair<int,int> > L;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		while(L.size() && L.back().second<=x) L.pop_back();
		L.push_back({i,x});
		if(i>=k)
		{
			if(i-L.front().first>=k) L.pop_front();
			cout<<L.front().second<<" ";
		}
	}
}


