#include<bits/stdc++.h>
using namespace std;

int fun(int a=3,int b=8)
{
	return a+b;
}

int main()
{
	cout<<fun(4+5,6)<<"\n";	  //15
	cout<<fun(2)<<"\n";       //9
	cout<<fun()<<"\n";        //10
}


