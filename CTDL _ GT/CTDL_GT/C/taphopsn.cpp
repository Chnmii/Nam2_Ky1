#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    set<int> S;
    int n, x;
    cin >> n;
    while(n--)
    {
        cin >> x;
        if (S.find(x) == S.end()) cout << x << " ";
        S.insert(x);
    }
}