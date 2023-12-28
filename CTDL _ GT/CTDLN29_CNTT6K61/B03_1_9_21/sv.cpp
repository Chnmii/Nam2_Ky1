#include<bits/stdc++.h>
using namespace std;
class sv
{
	public:
		string ten;
		int diem;
		sv(string t="chi pheo",int d=10) {ten=t;diem=d;}  //constructor
		sv(int d,string t){ten=t;diem=d;}
};
int main()
{
	sv A,B("thi no",11),C("lao hac");
	cout<<"\nA :"<<A.ten<<"\t\t"<<A.diem;
	cout<<"\nB :"<<B.ten<<"\t\t"<<B.diem;
	cout<<"\nC :"<<C.ten<<"\t\t"<<C.diem;
	A=sv("giao thu");
	cout<<"\nA :"<<A.ten<<"\t\t"<<A.diem;
	sv *p=new sv("Co Minh Thu",2);
	cout<<"\n*p :"<<p->ten<<"\t\t"<<p->diem;
	sv Z(3,"nam cao");
	cout<<"\nZ :"<<Z.ten<<"\t\t"<<Z.diem;
}


