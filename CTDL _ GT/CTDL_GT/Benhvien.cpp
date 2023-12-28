#include <bits/stdc++.h>
using namespace std;

enum sick{A,B,C};

istream & operator >> (istream &is, sick &s)
{
	string loai;
	is >> loai;
	if(loai == "a" || loai == "A") s=A;
	else if (loai == "b" || loai == "B") s=B;
	else s=C;
	return is;
}

ostream &operator << (ostream &os, sick s)
{
	if (s==A) os << "A";
	else if(s==B) os << "B";
	else os << "C";
	return os;
}

class benhnhan
{
	string ten;
	int tuoi;
	sick s;
	public:
		string get_ten() {return ten;}
		int get_tuoi() {return tuoi;}
		sick get_benh() {return s;}
		
		friend istream & operator >> (istream &is, benhnhan &a)
		{
			getline(is,a.ten);
			is >> a.tuoi >> a.s;
			return is;
		}
		
		friend ostream & operator << (ostream &os, benhnhan a)
		{
			os << setw(20) << left << a.ten << "||" << setw(8) << a.tuoi << "||" << setw(8) << a.s;
			return os;
		}
};

string cut(string x)
{
	string t[30];
	int i=0;
	istringstream is(x);
	while(is>>t[i]) i++;
	return t[i-1];
}

bool ss(benhnhan x, benhnhan y)
{
	string x1=cut(x.get_ten()), y1=cut(y.get_ten());
	if(x1==y1) return x.get_ten()<y.get_ten();
	return x1<y1;
}

class benhvien
{
	int n;
	benhnhan *a;
	public:
		benhvien() {n=0;a=NULL;} // ham tao
		~benhvien() {if(a) delete[]a;} // ham huy
		
		void nhap()
		{
			ifstream fin("bn.txt");
			fin >> n; 
			a = new benhnhan[n+2];
			for (int i=0; i<n; i++)
			{
				fin.ignore(1); // bo di ki tu \n
				fin >> a[i];
			}
			fin.close();
		}
		void sx()
		{
			sort(a,a+n,ss);
		}
		
		void xuat()
		{
			for (int i=0; i<n; i++)
				cout << a[i] << "\n";
		}
		void tuoitb()
		{
			int d[3]={}, T[3]={};
 			for(int i=0; i<n; i++)
			{
				if (a[i].get_benh() == A)  
				{
					d[0]++;
					T[0] += a[i].get_tuoi();
				}
				else if (a[i].get_benh() == B) 
				{
					d[1]++;
					T[1] += a[i].get_tuoi();
				}
				else if (a[i].get_benh() == C) 
				{
					d[2]++;
					T[2] += a[i].get_tuoi();
				}
			}
			for(int i=0; i<3; i++)
			{
				if (d[i] == 0) cout << "\nKo co benh nhan nao co benh " << static_cast<char>(i+'A'); // i+'A'
				else
					cout << "\nTuoi tb cua benh " << static_cast<char>(i+'A') << ": " << 1.0*T[i]/d[i];
			}
		}
		void dem()
		{
			int max[] = {};
			benhnhan m[3]; 
			int d[3]={};
			for (int i=0; i<n; i++)
			{
				if (a[i].get_benh() == A)
				{
					if (a[i].get_tuoi() >= max[0])
						max[0] = a[i].get_tuoi();
				}
				if (a[i].get_benh() == B)
				{
					if (a[i].get_tuoi() >= max[1])
						max[1] = a[i].get_tuoi();
				}
				if (a[i].get_benh() == C)
				{
					if (a[i].get_tuoi() >= max[2])
						max[2] = a[i].get_tuoi();
				}
			}
			for (int i=0; i<n; i++)
			{
				if (max[0] == a[i].get_tuoi())
				{
					d[0]++;
					m[0] = a[i];
				}		
				if (max[1] == a[i].get_tuoi())
				{
					d[1]++;
					m[1] = a[i];
				}
				if (max[2] == a[i].get_tuoi())
				{
					d[2]++;
					m[2] = a[i];
				}
			}
			for (int i=0; i<3; i++)
			{
				if (d[i] == 0)
					cout << "\nKo co benh nhan nao co benh " << static_cast<char>(i+'A');
				else
					cout << "\nBenh nhan co tuoi cao nhat co benh " << static_cast<char>(i+'A') << ":\n" << m[i] << endl;
			}
		}
};

int main()
{
	benhvien A;
	A.nhap();
	cout << "Danh sach benh nhan:\n";
	A.xuat();
	A.sx();
	cout << "\nDanh sach benh nhan sau khi sap xep:\n";
	A.xuat();
	
	A.tuoitb();
	A.dem();
}
