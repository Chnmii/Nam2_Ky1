#include <bits/stdc++.h>
using namespace std;

class mang1chieu
{
	int n;
	float *a;
	public:
		mang1chieu(int x=0, float *y=NULL)
		{
			n=x;
			a = new float[n+1]; 
			for (int i=0; i<n; i++)
				a[i] = y[i];
		}
		void xuat()
		{
			for (int i=0; i<n; i++)
				cout << a[i] << " ";
		}
		mang1chieu operator=(const mang1chieu &b) // gan
		{
			n = b.n;
			a = new float[b.n];
			for (int i=0; i<n; i++)
				a[i] = b.a[i];
			return *this;
		}
		mang1chieu (const mang1chieu &b) // ham tao sao chep
		{
			n = b.n;
			a = new float[b.n];
			for (int i=0; i<n; i++)
				a[i] = b.a[i];
		}
};

int main()
{

}

