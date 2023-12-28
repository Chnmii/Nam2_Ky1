#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,r,k,m,s,f;
    cin >> n >> r >> k >> m >> s >> f;
    map<int,int> M;
    
    if (k>0) k=k;
    else k=-k;
    if (m>0) m=m;
    else m=-m;

    queue<int> Q;
    Q.push(s); M[s]=1;
    while(Q.size())
    {
        int u = Q.front(); Q.pop();  // gan u = gtri dau
        if (u+k <= n && M.find(u+k) == M.end())  // neu chua co thi di tim
        {
            M[u+k] = M[u] + 1;
            Q.push(u+k);
        }
        if (u-m > 0 && M.find(u-m) == M.end())  // neu chua co thi di tim
        {
            M[u-m] = M[u] + 1;
            Q.push(u-m);
        }
        if (M.find(f) != M.end())  break;   // toi dc dich thi dung
        
    }
    if(M.find(f) != M.end())  cout << M[f]-1;   // toi dc dich thi in ra so buoc
    else cout << -1;

}