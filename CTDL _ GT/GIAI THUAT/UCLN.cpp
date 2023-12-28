#include <bits/stdc++.h>
using namespace std;
#define in(x) {cout << "Nhap " << #x << " = "; cin>>x;/*x=abs(x);*/}

int main()
{
	b1:
		int a,b;
		in(a); in(b);
		if (a<=0 or b<=0) goto b1;
	b2:
		if (a!=b)
		{
			a>b?a-=b:b-=a;
			goto b2;
		}
		//else goto b3;
	b3:
		cout << "UCLN: " << a;
}

