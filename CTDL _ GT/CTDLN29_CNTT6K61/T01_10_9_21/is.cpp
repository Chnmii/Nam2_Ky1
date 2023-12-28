#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
	istringstream is("345    67");
	ostringstream os;
	int a,b;
	is>>a>>b;
	os<<"a = "<<a;
	os<<"\nb = "<<b;
	cout<<os.str();
	system("cls");
//	char s[]="345    6";
//	char x[100];
//	int a,b;
//	sscanf(s,"%d%d",&a,&b);
//	sprintf(x,"day la cac gia tri a = %d\nb = %d",a,b);
//	cout<<x;
}


