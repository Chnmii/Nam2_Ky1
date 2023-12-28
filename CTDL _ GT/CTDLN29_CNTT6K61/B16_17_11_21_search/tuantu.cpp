#include<bits/stdc++.h>
using namespace std;

template <class T>
T *find(T *L,T *R,T x)
{
	for(T *p=L;p<R;p++) if(*p==x) return p;
	return NULL;
}
int main()
{
	int a[]={12,53,54,83,62,16,62,37,48,89,57,60,96,81,30,36,70,75,47,75};
	int n=sizeof(a)/sizeof(a[0]);
	int x=38, *p=find(a,a+n,x);
	if(p==0) cout<<"khong co "<<x<<"\n";
	else cout<<x<<" tai a["<<p-a<<"]";
	vector<int> V(a,a+n);
	auto it=find(V.begin(),V.end(),49);
	if(it==V.end()) cout<<"\nKhong thay";
	else 
	{
		*it=-1;
		cout<<"\nvector : ";
		for(auto v:V) cout<<v<<" ";
	}
}


