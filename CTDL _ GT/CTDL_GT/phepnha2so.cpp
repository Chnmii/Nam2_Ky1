#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        long long x, y, p=1, a, b;
        cin >> x >> y;
        for(int i=1; i<10; i++)
        {
            p = p*10;
            a = x/p;
            b = x%p;
            if(a*b==y) {cout << a << " " << b << "\n"; break;}
        }
    }
}