//nap chong toan tu
#include<bits/stdc++.h>
using namespace std;

enum gender{Nu,Nam};
istream &operator>>(istream &is,gender &s)
{
	string tam;
	is>>tam;
	s=tam=="Nu"?Nu:Nam;
	return is;
}
ostream &operator<<(ostream &os,gender s)
{
	os<<(s==Nu?"Nu":"Nam");
	return os;
}

int main()
{
	gender s;
	int n;
	cin>>s>>n; //nhap(s); //
	cout<<s<<" "<<n; //xuat(s); //
}


