#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        queue<pair<string, int>> Q;  // ten - tan suat
        for(string s:{"dangdungcntt", "tienquanutc", "quang123", "maianh", "nguyenminhduc2820"})
        Q.push(make_pair(s,1));  // tao pair voi moi ten co tan suat la 1
        int n;
        cin >> n;
        while(n > Q.front().second)  // neu con > tan suat
        {
            Q.push(Q.front());  // them vao cuoi
            Q.back().second*=2; // nhan tan suat len 2 lan
            n-=Q.front().second;  // giam n
            Q.pop();   // xoa dau
        }
        cout << Q.front().first << endl;
    }
}