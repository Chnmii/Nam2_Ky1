// #include <bits/stdc++.h>
#include <istream>
#include <iostream>
using namespace std;

enum LoaiBenh {
	loaiA,
	loaiB,
	loaiC
};

class BenhNhan
{
	public:   // public, private, protected
		string ten;
		int tuoi;
		int tinhTrangBenh;
};


istream& operator >> (istream& is, BenhNhan& b)
{
	cout << "nhap ten ";
	is >> b.ten;
	cout << "nhap tuoi ";
	is >> b.tuoi;

	cout << "nhap tinh trang benh ";

	string tinhTrang;
	is >> tinhTrang;

	if (tinhTrang == "A") {
		b.tinhTrangBenh = loaiA;
	} 
	else if (tinhTrang == "B")
	{
		b.tinhTrangBenh = loaiB;
	}
	else {
		b.tinhTrangBenh = loaiC;
	}

	return is;
}

ostream& operator << (ostream& os, BenhNhan b)
{
	os << "ten: " << b.ten << "\n";
	os << "tuoi: " << b.tuoi << "\n";
	os << "tinh trang benh ";
	if (b.tinhTrangBenh == loaiA) {
		cout << "tinh trang binh thuong";
	}
	else if (b.tinhTrangBenh == loaiB) {
		cout << "tinh trang khong binh thuong";
	} 
	else {
		cout << "tinh trang nguy hiem";
	}
	
	return os;
}



int main() {
	BenhNhan b;
	cin >> b;
	cout << b;

	return 0;
}
