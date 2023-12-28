//kiem tra hop le cua cac dau ngoac
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string x="3+(4+5)*2+(3-[1+2+3]+4*{3+5})-4+(2+4)";
	cin>>x;
	stack<char> S;
	bool ok=1;
	
	for(char c:x)
		if(c=='(') S.push(c);
		else if(c=='[') {if(S.empty() or S.top()!='(') S.push(c); else {ok=0;break;}}
		else if(c=='{') {if(S.empty() or S.top()=='{') S.push(c); else {ok=0;break;}}
		else if(c==')') {if(S.empty() || S.top() !='(') {ok=0;break;} else S.pop();}
		else if(c==']') {if(S.empty() || S.top() !='[') {ok=0;break;} else S.pop();}
		else if(c=='}') {if(S.empty() || S.top() !='{') {ok=0;break;} else S.pop();}
	
	if(ok && S.empty()) cout<<"hop le";
	else cout<<"khong hop le";
}


