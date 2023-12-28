#include <bits/stdc++.h>

using namespace std;

int istuc(long long x)
{
	long long s = 0;

	for (int i = 1; i < x; i++)
    {
		if (x%i == 0) 
            s += (i * i != x) ? (i + x/i) : i;
	}
	if (s==x) return 1;
	else return 0;
}

int main()
{
	long n,ok;
	cin >> n;
    long long a[n];

    for (int i=0; i<n; i++)
    {
        cin >> a[i];
        ok = istuc(a[i]);
        if (ok==1)
            cout << a[i] << " eh perfeito" << endl;  
        else 
            cout << a[i] << " nao eh perfeito" << endl;   
    }

    return 0; 

}