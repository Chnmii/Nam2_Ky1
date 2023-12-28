#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[20];
    cin >> s;
    for (int i=0; i<20; i++){
        if (s[i]==',')
            s[i]=' ';
    }
    for (int i=0; i<20; i++)
        cout << s[i];
}