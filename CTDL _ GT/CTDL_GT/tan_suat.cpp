#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> M;
    int n,x;
    cin >> n;
    while(n--) {cin >> x; M[x]++;}
    
    for(auto m:M) cout << m.first << " xuat hien " << m.second << " lan" << "\n";
}