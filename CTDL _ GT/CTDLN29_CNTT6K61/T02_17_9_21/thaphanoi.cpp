//thap ha noi
#include<bits/stdc++.h>
using namespace std;
int d=0;
void hn(int n,char A,char B,char C)
{
	if(n==1) cout<<"\nBuoc"<<++d<<" Chuyen dia "<<n<<" tu "<<A<<" sang "<<B;
	else
	{
		hn(n-1,A,C,B);
		cout<<"\nBuoc"<<++d<<" Chuyen dia "<<n<<" tu "<<A<<" sang "<<B;
		hn(n-1,C,B,A);
	}
}
int main()
{
	int n;
	cin>>n;
	hn(n,'A','B','C');
}


