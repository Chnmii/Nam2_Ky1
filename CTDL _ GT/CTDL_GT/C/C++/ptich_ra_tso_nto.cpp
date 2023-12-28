#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long N;
    cin >> N;
    long long n = N;// Tao ban sao cua N
    int dem[n];
    for (int i=0; i<=n; i++)
        dem[i]=0;
    for(int i = 2; i <= n; i++){
        while(n % i == 0){
            ++dem[i];
            n /= i;
        }
    }
    for(int i = 0; i <= N; i++){
        if(dem[i]){
            cout << i << " " << dem[i] << "\n";
        }
    }
    
}