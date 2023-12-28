//Tim so fibonacci thu n
//1 1 2 3 5 8 13 21 34 55 89 
//F[0]=F[1]=1; F[n]=F[n-1]+F[n-2]
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;						//1
	cin>>n;						//1
	long long F[n+1]={1,1};		//1+1+2+2     //F[0]=1->2
	for(int i=2;i<=n;i++) F[i]=F[i-1]+F[i-2]; //2+9(n-1)+1
	cout<<F[n];  				//2
}
//Do pt khong gian K(n)=sizeof(n)+sizeof(F)+sizeof(i)= 4+(n+1)*16+4
//Do pt thoi gian T(n)= 2+6+9n-6+2 = 9n+4 = O(n)

