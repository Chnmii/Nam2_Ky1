#include<bits/stdc++.h>
using namespace std;
int MAX=101;

int myhash(int x)
{
	hash<int> H;
	return H(x)/100%MAX;
}

int main()
{
	vector< list<int> > A;
	A.resize(MAX);
	srand(time(0));
	for(int i=1;i<=100;i++) 
	{
		int x=rand();
		int k=myhash(x);
		A[k].push_back(x);
	}
	for(int i=0;i<MAX;i++)
	{
		cout<<"\n"<<i<<" : ";
		for(auto z:A[i]) cout<<z<<" ";
	}
}


