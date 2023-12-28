//quan ly sinh vien
#include<bits/stdc++.h>
using namespace std;
enum gender{Nu=0,Nam=1};
istream &operator>>(istream &is,gender &g)
{
	string gt;
	is>>gt;
	for(char &c:gt) c=toupper(c);
	if(gt=="NU") g=Nu; 
	else g=Nam;
	return is;
}
ostream&operator<<(ostream &os,gender s)
{
	os<<(s==Nu?"Nu":"Nam");
	return os;
}
class sv
{
	string ten;
	int tuoi,diem;
	gender gt;
	public:
		string getten() {return ten;}
		int getdiem() {return diem;}
		//sv();
		friend ostream&operator<<(ostream &os,sv s)
		{
			os<<setw(30)<<left<<s.ten<<" || "<<s.tuoi<<" || "<<s.diem<<" || "<<s.gt;
			return os;		
		}		
		friend istream&operator>>(istream &is,sv &s)
		{
			getline(is,s.ten);
			is>>s.tuoi>>s.diem>>s.gt;
			return is;
		}
};
string cut(string x)  //le van hung dung  -> dung
{
	string t[10];
	int i=0;
	istringstream is(x);
	while(is>>t[i]) i++;
	return t[i-1];
}
bool ss(sv u,sv v)
{
	string u1=cut(u.getten()),v1=cut(v.getten());
	if(u1==v1) return u.getten()<v.getten();
	return u1<v1;
}
bool sosanh(sv u,sv v) {return u.getdiem()<v.getdiem();}
class lophoc
{
	int n;
	sv *A;
	public:
		lophoc(){n=0;A=NULL;}
		~lophoc(){if(A) delete[]A;}
		void nhap(string fn)
		{
			ifstream fin(fn);
			fin>>n; 
			A=new sv[n];
			for(int i=0;i<n;i++)
			{
				fin.ignore(1);  //bo qua 1 ky tu \n
				fin>>A[i];
			}
			fin.close();
		}
		void sxten(){sort(A,A+n,ss);}
		void sxdiem(){sort(A,A+n,sosanh);}
		void xuat()
		{
			for(int i=0;i<n;i++) cout<<A[i]<<"\n";
		}
};
int main()
{
	lophoc C; C.nhap("sv.txt"); cout<<"\nDanh sach sv : \n"; C.xuat();	
	C.sxten();	 cout<<"\nDanh sach sv sau khi sx ten : \n"; C.xuat();	
	C.sxdiem();	 cout<<"\nDanh sach sv sau khi sx diem: \n"; C.xuat();	
}


