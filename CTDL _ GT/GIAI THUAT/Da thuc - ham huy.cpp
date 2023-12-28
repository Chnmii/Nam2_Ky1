#include <bits/stdc++.h>
using namespace std;

class dathuc
{
	int n;
	double *a;
	public:
		dathuc(){n = -1; a = NULL;}
		dathuc(string fname)
		{
			cout << "\nNhap tu file: " << fname;
			fstream fin(fname); // khai bao kieu file va mo file trong c++11
			// fstream fin; fin.open(fname, ios::in);
			fin >> n;
			a = new double[n+1];
			for (int i=0; i<=n; i++)
				fin >> a[i];
			fin.close();
		}
		void xuat()
		{
			for (int i=0; i<=n; i++)
				cout << a[i] << " ";
		}
		~dathuc() { if(a!=NULL) delete[]a; cout << "\n Ham huy dc tu goi";}
		//                 --> giai phong 1 mang
};

int main()
{
	dathuc P;
	dathuc Q("dt.txt");
	cout << "\nP = "; P.xuat();
	cout << "\nQ = "; Q.xuat();
	
	dathuc *R = new dathuc("dt.txt"); // R khai bao la con tro nen can goi ham huy
	cout << "\nR = "; R->xuat();
	delete R; // goi ham huy cho con tro R
}
