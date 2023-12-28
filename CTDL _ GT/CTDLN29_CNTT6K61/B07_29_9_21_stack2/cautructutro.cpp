//cau truc tu tro
#include<bits/stdc++.h>
using namespace std;

struct person
{
	string ten;
	int tuoi;
	person *bo,*me;
	person(string t="",int tt=0,person *b=NULL,person *m=NULL)
	{
		ten=t;
		tuoi=tt;
		bo=b;
		me=m;
	}
};
int main()
{
	person A,B;
	A.ten="Johson"; A.tuoi=63; A.bo=A.me=NULL;
	B.ten="Mick"; B.tuoi=37; B.bo=&A; B.me=NULL;
	cout<<"Bo cua B : "<<B.bo->ten;
	person C("Misa",43,0,0);
	person *D=new person("Kendy",18,&B,&C);
	person E("Linda",1,0,D);
	cout<<"\nOng ngoai cua Linda la "<< E.me->bo->ten;
}


