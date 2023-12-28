#include<bits/stdc++.h>
#include"queue.cpp"
using namespace std;
int main()
{
	//freopen("buon.txt","r",stdin);
	int n,k,m,x;
	QUEUE< pair<int,int> > Q;   //first-ngay chin, second-san luong
	cin>>n>>k>>m;
	long long res=0,t;
	for(int i=1;i<n+k;i++)
	{
		if(i<=n) {cin>>x; Q.push({i,x});}
		while(Q.size() && i-Q.front().first+1>k) Q.pop();  //bo di luong dua le qua dat
		t=0;
		while(Q.size() && t+Q.front().second<=m) {t+=Q.front().second; Q.pop();}
		if(Q.size()) {Q.front().second-=m-t; t=m;}
		res+=t;
	}
	cout<<res;
}


