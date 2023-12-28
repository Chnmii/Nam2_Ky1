//canh cua
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		queue< pair<string,int> > Q;
		for(string s:{"dangdungcntt","tienquanutc","quang123","maianh","nguyenminhduc2820"}) 
		Q.push(make_pair(s,1));
		int n;
		cin>>n;
		while(n>Q.front().second) 
		{
			Q.push(Q.front()); 
			Q.back().second*=2;
			n-=Q.front().second;
			Q.pop();
		}
		cout<<Q.front().first<<"\n";
	}
}


