//map<A,B> 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	map<int,bool> S;
	int n,x;
	cin>>n;
	while(n--)
	{
		cin>>x;
		if (!S[x]) {cout<<x<<" ";S[x]=true;}
	}
}


