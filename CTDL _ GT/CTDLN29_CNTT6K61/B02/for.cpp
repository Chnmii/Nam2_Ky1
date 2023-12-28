#include<bits/stdc++.h>
using namespace std;
int main()
{
	//for(int x:{3,4,5,6}) cout<<x<<" ";  //C++11
	int a[]={4,7,2,8,1,6};
	cout<<"\nMang ban dau : ";	for(int x:a)	cout<<x<<" ";
	cout<<"\nNhap lai mang : ";
	for(int &x:a) cin>>x;
	cout<<"\nMang sau khi nhap lai : ";	for(int x:a)	cout<<x<<" ";

}


