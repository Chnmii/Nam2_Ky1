#include<bits/stdc++.h>
using namespace std;

struct A
{
	string ten;
	int tuoi;
};
struct B:public A
{
	int diem;
};
int main()
{
	B x; 
	x.ten="chi pheo";
	x.tuoi=15;
	x.diem=3;
	cout<<x.ten<<" "<<x.tuoi<<" "<<x.diem;
	

}


