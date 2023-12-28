#include <bits/stdc++.h>
using namespace std;

class A
{
	int a1;
	int *a2;
	public:
		void xuat()
		{
			cout << "a1: " << a1 << "\ta2: " << *a2 << "\n";
		}
		void f()
		{
			a1 += 100;
			(*a2) -= 1000;
		}
		A(int x=0, int y=0)
		{
			a1=x;
			a2 = new int; 
			*a2=y;
		}
		~A() {delete[]a2; cout << "\n Ham huy dc tu goi";}
		A operator=(const A &b) // gan
		{
			a1 = b.a1;
			a2 = new int;
			*a2 = *(b.a2);
			return *this;
		}
		A (const A &b) // ham tao sao chep
		{
			a1 = b.a1;
			a2 = new int;
			*a2 = *(b.a2);
		}
};

int main()
{
	A ob1(10,20);
	ob1.xuat();
	A ob2=ob1;
	//ob2 = ob1; // goi den toan tu gan mac dinh
	ob2.xuat();
	ob1.f();
	cout << "\nob1 sau khi tdoi  ";
	ob1.xuat();
	cout << "\nob2 sau khi tdoi  ";
	ob2.xuat();
	
}

