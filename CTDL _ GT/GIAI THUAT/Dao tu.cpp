#include <bits/stdc++.h>
using namespace std;

main()
{
	freopen("daotu.txt","r",stdin);
	string x[10004];
	int n=0;
	while(cin>>x[n]) n++;
	while(n--) 
	{
		string t=x[n];
		reverse(t.begin(),t.end());
		cout << t << " "; // dao ki tu
		
	}cout << x[n] << " "; // dao tu
}
