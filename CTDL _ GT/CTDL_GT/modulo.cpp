#include <bits/stdc++.h>
using namespace std;

#define LL unsigned long long

void test()
{
    string x;
    LL a=0, b, M, t=1;
    cin >> x >> b >> M;
    for (char c:x) a = (a*10+c-'0')%M;
    while(b)
    {
        if(b%2) t = t*a%M;
        b/=2; 
        a = a*a%M;
    }
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    test();
}