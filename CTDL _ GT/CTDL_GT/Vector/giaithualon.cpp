#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
#define coso 1000000

int main()
{
    fast_cin;
    int n;
    list<int> L(1,1);
    cin >> n;
    while(n>0)
    {
        ll m=0;
        for(auto it=L.rbegin(); it!= L.rend(); it++)
        {
            m += *it * n;
            *it = m % coso;
            m /= coso;
        }
        while(m) {L.push_front(m%coso); m/=coso;}
        n--;
    }
    cout << L.front();
    L.pop_front();
    for(auto x:L) printf("%.6d", x);

}