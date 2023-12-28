#include<bits/stdc++.h>
using namespace std;
enum loaibenh{A,B,C};
istream &operator>> (istream &is,loaibenh &x)
{
	string lb;
	is>>lb;
	for (char &a:lb)	a=toupper(a);
	if(lb=="A")
		x=A;
	else if (lb=="B")
		x=B;
	else
		x=C;
	return is;
}
ostream &operator<< (ostream &os,loaibenh x)
{
	switch(x)
	{
		case loaibenh::A : return os<<"A";
		case loaibenh::B : return os<<"B";
		case loaibenh::C : return os<<"C";
	}	
	return os;
}

class bn {
	private:
		string ten;
		int tuoi;
		loaibenh benh;
	public:
		string getten(){
			return ten;
		}
		int gettuoi(){
			return tuoi;
		}
		loaibenh getbenh(){
			return benh;
		}
		friend istream &operator>>(istream &is,bn &a)
		{
			getline(is,a.ten);
			is>>a.tuoi>>a.benh;
			return is;
		}
		friend ostream &operator<<(ostream &os,bn a)
		{
			os<<setw(30)<<left<<a.ten<<"||"<<a.tuoi<<"||"<<a.benh;
			return os;
		}
		
};

string cut(string x) 
{
	string t[10];
	int i=0;
	istringstream is(x);
	while(is>>t[i])	i++;
	return t[i-1];
}
bool ss(bn u,bn v)
{
	string u1=cut(u.getten()),v1=cut(v.getten());
	if(u1==v1)	return u.getten()<v.getten();
	return u1<v1;
}
class benhvien {
	private:
		int n;
		bn *a;
	public:
		benhvien(){n=0;a=NULL;}
		~benhvien(){if(a) delete[]a;}
		void nhap(string fn)
		{
			ifstream fin(fn);
			fin>>n;
			a=new bn[n];
			for(int i=0;i<n;i++)
			{
				fin.ignore(1);
				fin>>a[i];
			}
			fin.close();
		}
		
		void xuat()
		{
			for(int i=0;i<n;i++)
				cout<<a[i]<<endl;	
		}
		
		void sx()
		{
			sort(a,a+n,ss);
		}
		
		void tuoitb (int h)
		{	
		
			int d=0,s=0;
			for(int i=0;i<n;i++){
				if(a[i].getbenh()==h){
					s+=a[i].gettuoi();
					d++;
				}		
			}
			if (d==0)
				cout<<"Khong co tuoi trung binh  \n";
			else
				cout<<s/d<<endl;
			
		}
		void tuoicaonhat(char h)
		{
			int max=a[0].gettuoi();
			int g=0;
			for(int i=0;i<n;i++){
				if(a[i].getbenh()==h){
					if(a[i].gettuoi()>max){
						max=a[i].gettuoi();
						g++;
					}
				}	
			}
			if(g!=0){
				for(int i=0;i<n;i++){
					if(a[i].getbenh()==h){
						if(a[i].gettuoi()==max)
							cout<<a[i];		
					}	
				}
			}else
				cout<<"Khong co tuoi lon nhat";
			
			
		}
};

int main()
{
	benhvien c;
	c.nhap("bn.txt");
	c.xuat();
	c.sx();
	cout<<"Danh sach ten sau khi sap xep : \n";
	c.xuat();
	cout<<"Tuoi trung binh loai A:"<<endl;
	c.tuoitb(A);
	cout<<"Tuoi trung binh loai B:"<<endl;
	c.tuoitb(B);
	cout<<"Tuoi trung binh loai C:"<<endl;
	c.tuoitb(C);
	cout<<"Tuoi cao nhat loai A:";
	c.tuoicaonhat(A);
	cout<<"Tuoi cao nhat loai B:"<<endl;
	c.tuoicaonhat(B);
	cout<<"Tuoi cao nhat loai C:"<<endl;
	c.tuoicaonhat(C);



}


