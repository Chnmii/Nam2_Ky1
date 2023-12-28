#include<bits/stdc++.h>
using namespace std;

string cut(string x)  //le van hugn dung  -> dung
{
	string t;
	istringstream is(x);   //cin = console input
	while(is>>t);
	return t;
}
string cat(string x)
{
	while(x.size() && x.back()==' ') x.pop_back();  //xoa dau trong cuoi
	int i=x.length()-1;
	while(i>=0 && not isspace(x[i])) i--;  //tim ra vi tri dau trong cuoi cung
	return x.substr(i+1);
}

int main()
{
	string s="congdasfsdgf fafads sf easdf";
	cout<<cat(s);
	//cout<<cut(s);

}


