#include <bits/stdc++.h>

using namespace std;

int main()
{
    float a;
    cin >> a;
    if (a>0)
    {
        int b = int(a);
        int c = int(a)+1;
        cout << b << " " << c;
    }
    else if (a<0)
    {
        int b = int(a);
        int c = int(a)-1;
        cout << c << " " << b;
    }
    return 0;
}