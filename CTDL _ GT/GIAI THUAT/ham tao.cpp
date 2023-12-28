#include <bits/stdc++.h>
using namespace std;

class sv
{
	public:
		string ten;
		int diem;
		sv(string t="chi pheo", int d=10) {ten = t; diem = d;}
		sv (int d, string t) {ten =	t; diem = d;}
};

int main()
{
	sv A, B("thi no", 11), C("lao hac");
	A = sv("giao thu"); // co ham tao nen gan dc, gan tu trai sang phai
	cout << "\nA: " << A.ten << "\t" << A.diem;
	
	sv *p = new sv("Co giao", 9);
	cout << "\n*p : " << p->ten << "\t" << p->diem;
	
	sv E(3,"cao thu");
	cout << "\nE: " << E.ten << "\t" << E.diem;
}
