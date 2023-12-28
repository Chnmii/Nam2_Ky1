//giai thua
#include<bits/stdc++.h>
using namespace std;
#define coso 1000000
int main()
{
	int n,dem=0;
	list<int> L(1,1);
	scanf("%d",&n);
	while(n>0)
	{
		long long m=0;
		for(auto it=L.rbegin();it!=L.rend();it++)
		{
			m+=*it*n;
			*it=m%coso;
			m/=coso;
		}
		while(m) {L.push_front(m%coso); m/=coso;}
		while(L.back()==0) {dem++; L.pop_back();}
		n--;
	}
	printf("%d",L.front()); L.pop_front();
	for(auto x:L) printf("%.6d",x); 
	cout<<string(dem*6,'0');
}


