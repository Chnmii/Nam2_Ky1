#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin >> n;
    int a[n],b[n];
    for (int i=1; i<=n; i++){
        cin >> a[i];
    }
    
    for (int i=1; i<=n-1; i++)
    {
        if (a[i]>a[i+1])
            swap(a[i],a[i+1]);
        cout << i << endl;
    }
        
}