//bit mat bat de
#include<bits/stdc++.h>
using namespace std;
int main()
{
	queue<int> Q;
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++) Q.push(i);
	while(Q.size()>1)
		for(int i=1;i<=k;i++) 
		{
			if(i<k)Q.push(Q.front()); 
			Q.pop();
		}
	cout<<Q.front();
}


