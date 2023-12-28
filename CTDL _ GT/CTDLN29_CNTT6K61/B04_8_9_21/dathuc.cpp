//lop mau
#include<bits/stdc++.h>
using namespace std;

template <class T>
class dathuc       
{
	int n;   //bac n
	T *a;    //he so co kieu T;
	public: 
		dathuc<T>() {n=0;a=nullptr;}
		dathuc<T>(string fn)
		{
			ifstream fin(fn);
			fin>>n;
			a=new T[n+1];
			for(int i=0;i<=n;i++) fin>>a[i];
			fin.close();
		}
		~dathuc() {if(a) delete[]a; cout<<"\nham huy dathuc";}
		void xuat()
		{
			cout<<"\n";
			for(int i=0;i<=n;i++) cout<<a[i]<<" ";
		}
};



int main()
{
	dathuc<int> D("dt.txt");		//cac he so D co kieu int
	dathuc<double> P("dt1.txt");   //cac he so cua P co kieu double
	dathuc<long> *R=new dathuc<long>("dt.txt");
	R->xuat();
	delete R;
	D.xuat();
	P.xuat();
	dathuc< complex<int> > Z("dt2.txt"); Z.xuat();
}


