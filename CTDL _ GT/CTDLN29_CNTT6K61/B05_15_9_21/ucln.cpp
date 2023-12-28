#include<bits/stdc++.h>
using namespace std;
#define in(x) {cout<<"Nhap "<<#x<<" = "; cin>>x; x=abs(x);}
int main()
{
	buoc1:
		int a,b;
		in(a); // {cout<<"Nhap "<<#x<<" = "; cin>>x; x=abs(x);}
		in(b);
		//if(a<=0 or b<=0) goto buoc1;
	buoc2:
		if(a!=b)
		{
			a>b?a-=b:b-=a;
			goto buoc2;
		}
		//else goto buoc3;
	buoc3:
		cout<<"ucln "<<a;
}


