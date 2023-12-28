#include<bits/stdc++.h>
#include"slist.cpp"
using namespace std;
int main()
{
	slist<int> L(3,5);
	L.push_back(7);
	L.push_back(8);
	L.push_front(6);
	L.push_front(3);
	cout<<"\nList : "; for(slist<int>::iterator it=L.begin();it!=L.end();it++) cout<<*it<<" ";
	L.back()=2;
	L.front()=1;
	cout<<"\nList : "; for(auto x:L) cout<<x<<" ";
	slist<int>::iterator it=L.begin();
	int z=7;
	while(it!=L.end() && *it!=z) ++it;
	if(it==L.end()) cout<<"Khong co so "<<z;
	else 
	{
		L.insert(it,20);
	}
	L.insert(L.begin(),100);
	L.insert(L.end(),10);
	cout<<"\nList : "; for(auto x:L) cout<<x<<" ";
	
	L.erase(7);
//	while(it!=L.end() && *it!=7) ++it;
//	if(it==L.end()) cout<<"Khong co so "<<7;
//	else 
//	{
//		L.erase(it);
//	}
	cout<<"\nList sau khi xoa 7 : "; for(auto x:L) cout<<x<<" ";
	//slist<int> LL=L; //goi toan tu copy
	L.sort();
	cout<<"\nList : "; for(auto x:L) cout<<x<<" ";
	
//	LL.clear();
//	cout<<"\nList : "; for(auto x:LL) cout<<x<<" ";
//	

}


