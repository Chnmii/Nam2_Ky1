#include <bits/stdc++.h>
using namespace std;

template <class T>
class dathuc
{ 
	int n; // bac n
	T *a;  // cac he so co kieu T
	public: 
		dathuc<T>() {n=0; a=nullptr;}
		
		dathuc<T>(string fn)
		{
			fstream fin(fn);
			fin >> n;
			a = new T[n+1];
			for (int i=0; i<=n; i++) fin >> a[i];
			fin.close();
		}
		
		~dathuc() {if (a) delete[]a; cout << "\nDay la ham huy";}
		
		void xuat()
		{
			cout << "\n";
			for (int i=0; i<=n; i++) cout << a[i] << " ";
		}
};

int main()
{
	dathuc<int> D;    // cac hso co kieu int
	dathuc<double> P;  // cac hso co kieu double
	dathuc<long> *R = new dathuc<long>("dt.txt");
	R->xuat();
	dathuc<complex<int>> Z("dt.txt");
	Z.xuat();
}

