#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main()
{
    string x="3+(4+5)*2*(3-[1+2+3]+4*{3+5}-4+(2+4))";
    cin >> x;
    stack<char> s;
    bool ok=1;
    for(char c:x)
        if (c=='(' || c=='[' || c=='{') s.push(c);
        else if (c==')') {if(s.empty() || s.top() != '(') {ok=0; break;} else s.pop();}
        else if (c==']') {if(s.empty() || s.top() != '[') {ok=0; break;} else s.pop();}
        else if (c=='}') {if(s.empty() || s.top() != '}') {ok=0; break;} else s.pop();}

    
        // for(char c:x)
        // if (c=='(') s.push(c);
        // else if (c=='[') {if(s.empty() or s.top() != '(') s.push(c); else {ok=0; break;}}
        // else if (c=='{') {if(s.empty() or s.top() == '{') s.push(c); else {ok=0; break;}}
        // else if (c==')') {if(s.empty() || s.top() != '(') {ok=0; break;} else s.pop();}
        // else if (c==']') {if(s.empty() || s.top() != '[') {ok=0; break;} else s.pop();}
        // else if (c=='}') {if(s.empty() || s.top() != '}') {ok=0; break;} else s.pop();}
       
    
    if (ok && s.empty())  cout << "hop le";
    else cout << "ko hop le";
}