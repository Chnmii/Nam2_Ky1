#include <bits/stdc++.h>
using namespace std;

map<char,int> UT={{'*',2}, {'/',2}, {'+',1}, {'-',1}, {'(',0}};

int tinh(int a, int b, char c)
{
    if (c=='+') return a+b;
    if (c=='-') return a-b;
    if (c=='*') return a*b;
    if (c=='/') return a/b;
}

int main()
{
    string in,out;
    stack<char> S;
    cin >> in;
    for (char c:in)
    if('0' <= c && c <= '9') out.push_back(c);
    else if(c=='(') S.push(c);
    else if(c==')')
    {
        while(S.top()!='(') {out.push_back(S.top()); S.pop();}
        S.pop();
    }
    else 
    {
        while(S.size() && UT[S.top()] >= UT[c])
        {
            out.push_back(S.top()); 
            S.pop();
        }
        S.push(c);
    }
    while (S.size()) {out.push_back(S.top()); S.pop();}
    cout << out << "\n";

    stack<int> st;
    for(auto c:out)
    if('0' <= c && c <= '9') st.push(c-'0');   //chuyen chu thanh so
    else
    {
            int b = st.top(); st.pop();
            st.top() = tinh(st.top(), b, c);
    }
    cout << st.top();
}