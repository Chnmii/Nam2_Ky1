#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int> M;
    M["ha noi"] = 29;
    M["thai binh"] = 17;
    M["ha nam"] = 90;
    string x;
    getline(cin, x);
    if (M.find(x) != M.end()) cout << M[x];
    else cout << "Ko co";

    // tan suat
    /*
        map<int, int> M; // tang dan
        // unordered_map<int, int> M; --> ko sx tang dan
        int n, x;
        cin >> n;
        while(n--) {cin >> x; M[x]++;}
        for (auto m:M) cout << m.first << " " << m.second << "\n";
    */
}