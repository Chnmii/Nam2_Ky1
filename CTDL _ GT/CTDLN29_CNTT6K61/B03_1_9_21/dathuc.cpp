#include<bits/stdc++.h>
using namespace std;
class dathuc
{
	int n;
	double *a;
	public:
		dathuc() {n=-1;a=NULL;}
		dathuc(string fname) 
		{
			cout<<"\nNhap da thuc tu file : "<<fname;
			ifstream is(fname);  //khai bao kieu file va mo file C++11
			//fstream fin; fin.open(fname,ios::in);
			is>>n;
			a=new double[n+1];
			for(int i=0;i<=n;i++) is>>a[i];
			is.close();
		}
		void xuat() {for(int i=0;i<=n;i++) cout<<a[i]<<" ";}
		~dathuc() {if(a!=NULL) delete[]a; cout<<"\nham huy duoc tu goi";}
};
dathuc tong(dathuc P,dathuc Q)
{
}
int main()
{
	dathuc P;
	dathuc Q("dt.txt");
	cout<<"\nDa thuc P : "; P.xuat();
	cout<<"\nDa thuc Q : "; Q.xuat();
	dathuc *R=new dathuc("dathuc.txt");
	cout<<"\nDa thuc *R : "; R->xuat();
	delete R;  //goi ham huy cho R
}


