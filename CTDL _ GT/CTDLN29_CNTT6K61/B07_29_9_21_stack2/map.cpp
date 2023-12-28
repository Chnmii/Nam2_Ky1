//map<A,B> M; map M la anh xa tu A sang B sao cho moi x thuoc A co duy nhat y=M[x]
#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<string,int> M;
	M["ha noi"]=29;
	M["ha nam"]=90;
	M["thanh hoa"]=36;
	string x;
	getline(cin,x);
	if(M.find(x)!=M.end()) cout<<M[x];
	else cout<<"khong co";

}


