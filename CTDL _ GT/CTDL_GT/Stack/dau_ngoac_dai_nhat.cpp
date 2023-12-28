#include <bits/stdc++.h>
#include "stack.cpp"
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int dem = 0;
        string x;
        cin >> x;
        Stack<char> s;
        int n = x.size();
        s.push(-1);
    
        for(int i=0; i<n; i++)
        {
            if(x[i] == '(')    s.push(i);
            else
            {
                s.pop();
                if(s.size() > 0)
                    dem = max(dem, i - s.top());
                if(s.size() == 0) s.push(i);
            }
        }
        cout << dem << endl;
    }
    
}