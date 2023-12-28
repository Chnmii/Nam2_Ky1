#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,t=0;
    cin >> n;
    int a[n];
    for (int i=1; i<=n; i++)
    {
        cin >> a[i];
    }
    int max=a[n];
    for (int i=n-1; i>0; i--)
    {
        if (max>a[i]){
            t+= max-a[i];
        }
        else    
            max = a[i];
    }
    
    cout << t;
    return 0;
}