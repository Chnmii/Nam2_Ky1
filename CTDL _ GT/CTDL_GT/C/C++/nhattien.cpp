#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, k,t=0;
    cin >> n >> k;
    long long v=n>k?k:n;
    long long a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a+n, greater<int>());

    for (int i=0; i<v; i++)
        t+= a[i];
    cout << t;
}