#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"

using namespace std;

int istuc(long x)
{
	long s = 1;
	for (int i = 2; i <= sqrt(x); i++)
    {
		if (x%i == 0) s += (i * i != x) ? (i + x/i) : (i);
	}
	if (s == x && x != 1)   return 1;
    else    return 0;
}

int main()
{
    fast_cin;

	long n, x;
	cin >> n;

    while(n--)
    {
        cin >> x;
        int check = istuc(x);
        if (check == 1)
            cout << x << " eh perfeito" << endl;  
        else 
            cout << x << " nao eh perfeito" << endl;   
    }

    return 0;

}