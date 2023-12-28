#include <bits/stdc++.h>
using namespace std;

long long F(int n)
{
	if (n==0 or n==1) return 1;
	return F(n-1)+F(n-2);
}

int main()
{
	int n;
	cin >> n;
	long long F[n+1]={1,1};
	for (int i=2; i<=n; i++)
		F[i] = F[i-1] + F[i-2];
	cout << F[n];
	
	// cach 2: de quy
	for (int i=0; i<=10; i++)
		cout << i << " : " << F[i] << "\n";
}

