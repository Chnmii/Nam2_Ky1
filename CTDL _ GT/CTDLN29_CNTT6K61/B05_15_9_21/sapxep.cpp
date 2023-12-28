#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,t;					//4
	cin>>n;							//1
	int a[n];						//1
	for(i=0;i<n;i++) cin>>a[i];		//1+n*4+1
	
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		if(a[i]>a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
		
	for(i=0;i<n;i++) cout<<a[i]<<" ";
}
//Khong gian K(n)=4*sizeof(int)+n*sizeof(int)
//Thoi gian T(n) danh gia 5n^2/2+7n/2-3<=T(n)<=6n^2-3 = O(n^2)

