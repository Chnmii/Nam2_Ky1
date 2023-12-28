#include<bits/stdc++.h>
using namespace std;
int main()
{
	multiset<int,greater<int> > T;
	for(int x:{35,13,74,63,62,15,63,17,13,46,34,35,72,83,45,81,27,63,16}) T.insert(x);
	for(auto x:T) cout<<x<<" ";
}


