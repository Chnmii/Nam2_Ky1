#include <bits/stdc++.h>
using namespace std;

/*
	int a=5;
	if (a) cout << "a khac 0";
	if (!a) cout << "a bang 0";
*/
void sx(int *a, int n, bool tang=1)
{
	for (int i=0; i<n; i++)
		for (int j=i+1; i<n; i++)
			if (a[i]>a[j]==tang)
				swap(a[i],a[j]);
}

main()
{
	int a[]={6,8,5,4,3,9}, n=sizeof(a)/sizeof(int);
	sx(a,n); // sx tang
	// sx(a,n,0) --> sx giam
	for (int x:a) cout << x << endl;
}
