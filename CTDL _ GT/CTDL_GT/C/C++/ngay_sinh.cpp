#include <bits/stdc++.h>

using namespace std;

bool ktra(long long a)
{
    long c= pow(a,1.0/3);
    if (c*c*c==a)
        return true;
    else 
        return false;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++)
    	cin >> a[i];
    for (int i=0; i<n; i++)
    {
        if (ktra(a[i])==1)
            cout << "YES";
        else
            cout << "NO";
    }
    return 0;
}