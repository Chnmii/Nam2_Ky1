#include <bits/stdc++.h>
using namespace std;

void nhap(int *a, int n)
{
	if(n==0) return;
	nhap(a,n-1);
	cout << "a["<<n<<"] = "; cin >> a[n];
}

void xuat(int *a, int n)
{
	if (n) {xuat(a,n-1); cout << a[n] << " ";}
}

int tong(int *a, int n)
{
	return n==0?0:tong(a,n-1)+a[n];
}

int Max(int *a, int n)
{
	return n==0?INT_MIN:max(Max(a,n-1), a[n]);
}

int MAX(int *a, int L, int R)
{
	if (L==R) return a[L];
	int M=(L+R)/2;
	return max(MAX(a,L,M),MAX(a,M+1,R));
}

void sx(int *a, int n)
{
	if(n<=1) return;
	sx(a,n-1);
	for(int i=0;i>1 && a[i-1]>a[i]; i--)
		swap(a[i-1],a[i]);
}

int main()
{
	int n, a[100];
	cout << "n = "; cin >> n;
	nhap(a,n);
	cout << "\nDay vua nhap: ";
	xuat(a,n);
	cout << "\nTong: " << tong(a,n);
	cout << "\nMax = " << Max(a,n);
	cout << "\nMax = " << MAX(a,1,n);
	cout << "\nGia tri max: " << *max_element(a+1,a+n+1);
}

