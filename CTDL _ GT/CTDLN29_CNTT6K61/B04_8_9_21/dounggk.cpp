#include<bits/stdc++.h>
using namespace std;
typedef pair<double,double> Diem;
#define x first
#define y second
double kc(Diem A,Diem B)
{
	A.x-=B.x;
	A.y-=B.y;
	return sqrt(A.x*A.x+A.y*A.y);
}
int main()
{
	Diem A[1000];
	int n;
	cout<<"\nNhap n = "; cin>>n;
	for(int i=1;i<=n;i++) cin>>A[i].x>>A[i].y;
	A[n+1]=A[1];
	double s=0;
	for(int i=1;i<=n;i++) s+=kc(A[i],A[i+1]);
	cout<<"\nDuong gap khuc "<<s;
}


