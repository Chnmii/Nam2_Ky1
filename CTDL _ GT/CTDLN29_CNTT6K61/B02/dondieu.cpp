#include<bits/stdc++.h>
using namespace std;
//Trong C khong co kieu logic cu dung la khac khong cu sai bang 0
//Trong C++ co kieu bool gom 2 phan tu true (1) false (0)
//cac phep toan logic
//not ~ ! phu dinh
//and ~ && 
//or  ~ ||

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int &x:a) cin>>x;  //nhap a[0] den a[n-1] cua c++11
	bool t=false,g=false,b=false;
	for(int i=1;i<n;i++) 
	{
		if(a[i-1]<a[i])  t=1;
		if(a[i-1]==a[i]) b=1;
		if(a[i-1]>a[i])  g=1;
	}
	int k=t+2*g+4*b;
	string kl[]={"Day it hon 2 phan tu","Day don dieu tang ngat",
	"Day don dieu giam ngat","Day khong don dieu",
	"Day bang nhau","Day don dieu tang",
	"Day don dieu giam","Day khong don dieu"};
	cout<<kl[k];
	//t=1, g=b=0 tang ngat  ->k=1
	//g=1, t=b=0 giam ngat  ->k=2
	//b=1, t=g=0 day bang   ->k=4
	//t=b=1, g=0 dd tang	->5
	//g=b=1, t=0 dd giam    ->6
	//con lai la linh tinh
}


