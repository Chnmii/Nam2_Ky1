#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    stack<int> S;
    cin >> n;
    while(n) {S.push(n % 2); n/=2;}
    //for (;n;n/=2)   S.push(n % 2);
    while(S.size()) { cout << S.top(); S.pop();}
}