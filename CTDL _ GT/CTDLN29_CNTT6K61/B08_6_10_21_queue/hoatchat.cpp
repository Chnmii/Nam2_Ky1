#include<bits/stdc++.h>
using namespace std;
map<char,int> K={{'C',12},{'H',1},{'(',0},{'O',16}};
void sol()
{
	stack<int> S;
	string x;
	cin>>x;
	for(char c:x)
	if(K.find(c)!=K.end()) S.push(K[c]);
	else if('0'<=c && c<='9') S.top()*=c-'0';
	else
	{
		int t=0;
		while(S.top()) {t+=S.top(); S.pop();}
		S.top()=t;
	}
	int t=0;
	while(S.size()) {t+=S.top(); S.pop();}
	cout<<t<<"\n";
}
int main()
{
	int t;
	cin>>t;
	while(t--) sol();
}

