#include<bits/stdc++.h>
#include"vector.cpp"
using namespace std;
int main()
{	
	Vector<string> V(5,"chuc vui ve");
	Vector<string> V1=V;   //toan tu copy
	Vector<string> V2;  
	V2=V1;	//toan tu gan
	for(auto x:V2) cout<<x<<" ";
	V2.pop_back();
	V2.push_back("\nngay hom nay");
	for(Vector<string>::reverse_iterator it=V2.rbegin(); it!=V2.rend();it++) cout<<*it<<" ";
}


