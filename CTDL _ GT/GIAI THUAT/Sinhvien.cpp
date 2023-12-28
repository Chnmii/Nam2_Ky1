#include <bits/stdc++.h>
using namespace std;

enum gender{Nu=0, Nam=1};

istream & operator >> (istream &is, gender &g)
{
	string gt;
	is >> gt;
	
	if(gt== "NU") g=Nu;
	else g=Nam;
	return is;
}

ostream &operator << (ostream &os, gender s)
{
	os << (s==Nu?"Nu":"Nam");
	return os;
}

class sv
{
	string ten;
	int tuoi, diem;
	gender gt;
	public:
		//sv();
		friend istream & operator >> (istream &is, sv &s)
		{
			getline(is,s.ten);
			is >> s.tuoi >> s.diem >> s.gt;
			return is;
		}
		friend ostream & operator << (ostream &os, sv s)
		{
			os << setw(20) << left << s.ten << "||" << setw(8) << s.tuoi << "||" << setw(8) << s.diem << "||" << setw(8) << s.gt;
			return os;
			
		}
};

class lophoc
{
	int n;
	sv *a;
	public:
		lophoc(){n=0;a=NULL;}
		~lophoc(){if(a) delete[]a;}
		void nhap()
		{
			fstream fin("sv.txt");
			fin >> n; 
			a = new sv[n+2];
			for (int i=0; i<n; i++)
			{
				fin.ignore(1); // bo di ki tu \n
				fin >> a[i];
			}
			fin.close();
		}
		void xuat()
		{
			ofstream fo("output.txt");
			for (int i=0; i<n; i++)
				fo << a[i] << "\n";
		}
};

int main()
{
	lophoc C;
	C.nhap();
	cout << "Danh sach sinh vien\n"; C.xuat();
}

