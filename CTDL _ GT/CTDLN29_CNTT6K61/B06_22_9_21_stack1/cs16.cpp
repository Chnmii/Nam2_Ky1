//doi co so 16
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	char Hex[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	stack<char> S;
	cin>>n;
	//printf("dung printf %x\n",n);
	while(n) {S.push(Hex[n%16]); n/=16;}
	while(S.size()) {cout<<S.top(); S.pop();}
}


