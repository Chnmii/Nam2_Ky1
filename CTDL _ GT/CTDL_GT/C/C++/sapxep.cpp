#include <bits/stdc++.h> // chua all thu vien cua c++

using namespace std;

int main(){
    // sort() --> dc dinh nghia trong <algorithm>
    int n;
    cin >> n;
    vector<long long>v(n);
    for (int i=0; i<n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    long long dem=1, ketqua=0;
    for (int i=1; i<n; i++){
        if (v[i]==v[i-1]){
            dem++;
        }
        else {
            ketqua+= dem*(dem-1)/2;
            dem=1;
        }
    }
    ketqua+= dem*(dem-1)/2; // dung cho cap cuoi cung
    cout << ketqua;


    // danh dau
    // vector<long long> v(100009, 0);
    // long long nhap;
    // long long ketqua =0;
    // for (int i=0; i<n; i++){
    //     cin >> nhap;
    //     v.[nhap]++;
    // }
    // for 




    return 0;
}
