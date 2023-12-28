//khong co thu vien tree trong STL
//Co cac thu vien 
//map, multimap  -> B - tree
//set, multiset  -> Red black tree
//unordered_map  -> hash table
//priority_queue -> heap

#include<bits/stdc++.h>
using namespace std;
int main()
{
	multiset<int,less<int> > S;
	for(int x:{4,7,2,8,4,8,3,2}) S.insert(x);
	cout<<"\nset : ";for(auto it=S.begin();it!=S.end();it++) cout<<*it<<" ";
	auto itt = S.find(4); 
	if(itt!=S.end()) S.erase(itt);
	//cout<<"\nset : ";for(auto it=S.begin();it!=S.end();it++) cout<<*it<<" ";
	cout<<"\nset : ";for(auto x:S) cout<<x<<" ";
	
//	while(S.size())
//	{
//		cout<<*S.begin()<<" ";
//		S.erase(*S.begin());
//	}
	
	

}


