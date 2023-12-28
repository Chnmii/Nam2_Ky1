#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,m,x; // n thua ruong, k ngay, nang luc m
    queue< pair<int,int> > Q;     // first - ngay, second - san luong
    cin >> n >> k >> m;

    long long res = 0, t;
    for (int i = 1; i < n+k; i++)
    {
        if(i <= n) {cin >> x; Q.push({i,x});} // nhap va cho vao queue
        while(Q.size() && i-Q.front().first + 1 > k)  // neu > k -> dua bi hong -> lay ra
            Q.pop();
        t = 0;
        while(Q.size() && t + Q.front().second <= m)  // neu <= nang luc thi van thu hoach dc
        {
            t += Q.front().second;
            Q.pop();
        }
        if (Q.size()) {
            Q.front().second -= m-t; t = m;  // thu hoach not de du nang luc
        }
        res += t;
    }
    cout << res;
}

/*
    1,4     2,17      3,2       4,15        5,23        6,16

            t           res
    i=1     4           4
    i=2     11          15  // thua 4
    i=3     4+2         23  // 4 van thu hoach dc    
    i=4     11          34  // thua 4
    i=5     4+7         45  // 4 van thu hoach dc, thua 23-7=16
    i=6     11          56  // thu 11 qua trong 16 qua cua ngay trc, thieu 5 qua trc va thua 16 qua nay
    i=7     11          67  // thu not 5 qua trc va 6 qua hom qua -> thieu 10 qua
    i=8     10          77  // het


*/