//toan tu copy va gan
#include<bits/stdc++.h>
using namespace std;

class A
{
	int elem;
	public:
		A(int x=0) : elem(x) {}
		A(A &t)			//toan tu copy
		{
			elem=t.elem;
			cout<<"\nda copy";
		}	
		void xuat() {cout<<elem;}
		A&operator=(A &t)  //toan tu gan
		{
			elem=t.elem;
			cout<<"\nda gan";
			return *this;
		}
		int getelem() {return elem;}		
};

int fun(A x) {return x.getelem()*2;}

int main()
{
//	A x(3),y(7),z(2); x.xuat();
//	z=y=x;
//	cout<<"\ny = "; y.xuat();
//	A a=z;
//	cout<<"\nz = "; z.xuat();
	A a(7);
	cout<<fun(a);
	
}


