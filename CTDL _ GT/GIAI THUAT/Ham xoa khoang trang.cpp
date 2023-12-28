#include <bits/stdc++.h>
using namespace std;

#define ten(a) #a
enum ViemGan
{
	A, B, C
};

void del_space(string &s)	// ham xoa khoang trang
{
	while(s[0] == ' ')	// xoa ki tu ' ' o dau;
	{
		s.erase(s.begin() + 0);
	}
	while(s[s.size() - 1] == ' ') // xoa ki tu ' ' o cuoi
	{
		s.pop_back();
	}
	for(int i = 0; i < s.size(); i++) // xoa ki tu ' ' lien tiep
	{
		if(s[i] == ' ' && s[i + 1] == ' ')
		{
			s.erase(s.begin() + i);
			i--;
		}
	}
}

void viet_hoa(string &s)
{
	for(int i = 0; i < s.size(); i++)	s[i] = tolower(s[i]); // viet thuong tat ca
	s[0] = toupper(s[0]);
	for(int i = 1; i < s.size() - 1; i++)
	{
		if(s[i] == ' ' && s[i + 1] != ' ')	s[i + 1] = toupper(s[i + 1]);  // viet hoa chu cai dau cua tung tu
	}
}

istream &operator >> (istream &is, ViemGan &a) // toan tu nhap benh viem gan
{
	char x;
	is >> x;
	x = toupper(x);
	if(x == 'A')	a = A;
	else if(x == 'B')	a = B;
	else	a = C;
	return is;
}

ostream &operator << (ostream &os, const ViemGan &a) // toan tu xuat benh viem gan
{
	if(a == A)	cout << "A";
	else if(a == B)	cout << "B";
	else	cout << "C";
	return os;
}

class BenhNhan
{
	private:
		string hoten;
		int tuoi;
		ViemGan benh;
	public:
		BenhNhan(const string &_hoten = "", const int &_tuoi = 0, const ViemGan &_benh = A) // ham tao
		{
			hoten = _hoten;
			tuoi = _tuoi;
			benh = _benh;
		}
		
		int get_tuoi()	{return tuoi;}
		ViemGan get_benh()	{return benh;}
		string get_ten()	{return hoten;}
	friend bool cmp(const BenhNhan &, const BenhNhan &);	// so sanh
	friend istream &operator >> (istream &, BenhNhan &);	// nhap 1 benh nhan
	friend ostream &operator << (ostream &, const BenhNhan &);	// xuat 1 benh nhan
	friend void lam_chuan_ten(BenhNhan &); // ham lam chuan ten
};

void lam_chuan_ten(BenhNhan &x)
{
	del_space(x.hoten);
	viet_hoa(x.hoten);
}

istream &operator >> (istream &is, BenhNhan &x)
{
	getline(is, x.hoten);
	lam_chuan_ten(x);
	is >> x.tuoi >> x.benh;
	return is;
}

ostream &operator << (ostream &os, const BenhNhan &x)
{
	os << setw(26) << left << x.hoten << " || " << setw(8) << x.tuoi << " || " << setw (8) << x.benh << " || " << endl;
	return os;
}

string name(const string &s)
{
	string t;
	istringstream is (s);
	while(is >> t);
	return t;
}

bool cmp(const BenhNhan &a, const BenhNhan &b)
{
	if(name(a.hoten) == name(b.hoten))	return	a.hoten < b.hoten;
	return name(a.hoten) < name(b.hoten);
}

class BenhVien
{
	private:
		int n;
		BenhNhan *A;
	public:
		BenhVien(const int &_n = 0, BenhNhan *_A = nullptr)
		{
			n = _n;
			A = _A;
		}
		void nhap(const string &);	// nhap du lieu tu tep
		void xuat();	// xuat danh sach ra man hinh
		void sapxep();	// ham sapxep theo ten
		double tuoitb(const ViemGan &);	// tinh tuoi trung binh cua tung loai benh;
		void caonhat(const ViemGan &);	// tim benh nhan co tuoi cao nhat cua tung loai benh;
		~BenhVien()
		{
			if(A)	delete []A;
		}
};


void BenhVien::nhap(const string &fn)
{
	ifstream fin(fn);
	fin >> n;
	A = new BenhNhan[n];
	for(int i = 0; i < n; i++)
	{
		fin.ignore(1);
		fin >> A[i];
	}
	fin.close();
}

void BenhVien::sapxep()
{
	sort(A, A + n, cmp);
}

double BenhVien::tuoitb(const ViemGan &x)
{
	double S = 0;
	int c = 0;
	for(int i = 0; i < n; i++)
	{
		if(A[i].get_benh() == x)
		{
			c++;
			S += A[i].get_tuoi();
		}
	}
	if(!c)	return S;
	else	return S / c;
}

void BenhVien::caonhat(const ViemGan &x)
{
	int max = -1;
	for(int i = 0; i < n; i++)
	{
		if(A[i].get_benh() == x && A[i].get_tuoi() > max)	max = A[i].get_tuoi();
	}
	if(max == -1)
	{
		cout << "Khong co\n";
		return;
	}
	
	cout << "Benh nhan co tuoi cao nhat:\n";
	cout << setw(30) << left << "Ho va ten" << setw(12) << "Tuoi" << endl;
	for(int i = 0; i < n; i++)
	{	
		if(max == A[i].get_tuoi())
		{
			cout << setw(26) << left << A[i].get_ten() << " || " << setw(8) << A[i].get_tuoi() << " || " << endl;				
		}
	}
}

void BenhVien::xuat()
{
	cout << setw(30) << left << "Ho va ten" << setw(12) << "Tuoi"  << setw (12) << "Viem Gan" << endl;
	for(int i = 0; i < n; i++)
	{
		cout << A[i];
	}
}

int main()
{
	
	BenhVien X;
	double k;
	
	X.nhap("bn.txt");
	cout << "Danh sach benh nhan:\n";
	X.xuat();
	
	X.sapxep();
	cout << "\nDanh sach benh nhan sau khi sap xep:\n";
	X.xuat();
	
	ViemGan temp[3] = {A, B, C};
	for(int i = 0; i < 3; i++)
	{
		cout << "\nBenh viem gan " << temp[i] << ":\n";
		k = X.tuoitb(temp[i]);
		if(k != 0.00)	cout << "Tuoi trung binh cua benh viem gan " << temp[i] << " = " << setprecision(1)	<< fixed << k << endl;
		X.caonhat(temp[i]);
	}
	
	return 0;
	
}
