#include<bits/stdc++.h>
#include"vector.cpp"
using namespace std;
int main()
{
	int a[]={4,7,2,8,1,6,9,3,5,2,6,3};
	Vector<int> V(5,3);
	cout<<"\nsize    : "<<V.size();
	cout<<"\ncapacity: "<<V.capacity();
	V.push_back(8);
	V.front()=2;
	cout<<"\nfront : "<<V.front();
	cout<<"\nback  : "<<V.back();
	cout<<"\nsize    : "<<V.size();
	cout<<"\ncapacity: "<<V.capacity();
	V.pop_back();
	cout<<"\nVector : "; for(int i=0;i<V.size();i++) cout<<V[i]<<" ";
	V.resize(10,6);
	cout<<"\nVector : "; for(int i=0;i<V.size();i++) cout<<V[i]<<" ";
	cout<<"\ncapacity: "<<V.capacity();
	Vector<int> VV=V;
	cout<<"\nVector VV : "; for(int i=0;i<VV.size();i++) cout<<V[i]<<" ";

	sort(V.begin(),V.end());
	cout<<"\nVector iterator : "; for(Vector<int>::iterator it=V.begin();it!=V.end();it++) cout<<*it<<" ";
	V.push_back(5);
	cout<<"\nDuyet auto : "; for(auto x:V) cout<<x<<" ";
	auto it=V.begin(); it++;it++; *it=0;
	cout<<"\nDuyet      : "; for(auto x:V) cout<<x<<" ";
	V.insert(it,7);
	cout<<"\nDuyet      : "; for(auto x:V) cout<<x<<" ";
	it++;
	V.erase(it);
	cout<<"\nDuyet      : "; for(auto x:V) cout<<x<<" ";
	
	cout<<"\nDao : "; for(Vector<int>::reverse_iterator it=V.rbegin();it!=V.rend();it++) cout<<*it<<" ";
//	cout<<"\nDuyet : "; for(auto x:V) cout<<x<<" ";

//	cout<<"\nDuyet : "; for(auto x:V) cout<<x<<" ";
//	it++;
//	V.erase(it);
//	cout<<"\nDuyet : "; for(auto x:V) cout<<x<<" ";
}


