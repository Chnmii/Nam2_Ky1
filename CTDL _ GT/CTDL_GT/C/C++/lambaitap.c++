#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if (b>=c && c>a)
        cout << b-c;
    else if (c>b)
            cout << "0";
         else if (a>d)
                 cout << "0";
              else if (d>=a && a>c)
                     cout << d-a;
}