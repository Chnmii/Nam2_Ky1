#include <bits/stdc++.h>
using namespace std;

int tach(int n)
{
	if(n<=4 || n%2) return n;
	return tach((n/2)+2) + tach((n/2)-2) +n;
}

int main()
{
	cout << tach(60);
}

