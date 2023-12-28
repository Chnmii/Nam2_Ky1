#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k, ketqua=0;
    cin >> n >> k;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a+n, greater<int>());
    int giam=0;
    for (int i=0; i<n; i++){
        if (giam>=a[i]){
            break;
        }
        ketqua += a[i]-giam;
        giam+= k;
    }
    cout << ketqua;

    return 0;
}