//vi du tinh giai thua so lon n=1000!
#include<bits/stdc++.h>
#include"vector.cpp"
using namespace std;
int main()
{
	int n;
	Vector<int> V(1,1);
	cin>>n;
	while(n>1)
	{
		int m=0;
		for(auto &v:V){m+=v*n; v=m%10; m/=10;}
		while(m) {V.push_back(m%10); m/=10;}
		n--;
	}
	for(auto it=V.rbegin();it!=V.rend();it++) cout<<*it;
	//reverse(V.begin(),V.end());  for(auto v:V) cout<<v;
}


