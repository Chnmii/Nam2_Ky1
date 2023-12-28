#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<int> S;
	S.push(5);
	S.push(6);
	S.pop();
	S.pop();
	S.pop();
	S.pop();
	S.push(1);
	while(S.size()) {cout<<S.top()<<" "; S.pop();}
}


