#include<bits/stdc++.h>
using namespace std;
class ps
{
	private:
		int t,m;
	public:
		ps(int a=0,int b=1) //ham tao = cau tu
		{
			t=a;m=b;
		}
		void sett(int a) {t=a;}
		void setm(int a) {m=a;}
		int gett() {return t;}
		int getm() {return m;}
		void xuat() {if(m!=1) cout<<t<<"/"<<m; else cout<<t;}
};
int main()
{
//	ps *p=new ps;
//	p->sett(5);//p.t=5;
//	p->setm(8);//p.m=5;
//	cout<<"\np = "<<p->gett()<<"/"<<p->getm();
	ps p(4,6);  //p=4/6
	ps q(5);    //q=5/1
	ps r;       //0/1	
	cout<<"\np = "; p.xuat();
	cout<<"\nq = "; q.xuat();
	cout<<"\nr = "; r.xuat();
	r=ps(7,3); //r=7/3
	cout<<"\nr = "; r.xuat();
	q=ps(4,5);
	p=2;   // binh thuong khong co ham tao khong gan duoc o day co ep kieu p=ps(2)
	cout<<"\np = "; p.xuat();
	cout<<"\nq = "; q.xuat();
	
}


