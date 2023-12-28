#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char Hex[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    cout << Hex[10];
    stack<char> S;
    cin >> n;
    printf("Dung printf %x\n", n);

    while(n) {S.push(Hex[n%16]); n/=16;}
    //for (;n;n/=2)   S.push(n % 2);
    while(S.size()) { cout << S.top(); S.pop();}

}