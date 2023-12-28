#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 0;
    while(i*i <= n)
    {
        if(i*i == n)
        {
            cout << "YES";
            return 0;
        }
        ++i;
    }
    cout << "NO";
    return 0;
}
// cach 2

bool scp(long long n){
    long long sqr = sqrt(n);
    return (sqr*sqr == n);
}
int main(){
    long long n;
    cin >> n;
    if(scp(n)){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
