//Xây d?ng l?p b?nh nhân có 2 toán t? >> và <<
//Tên
//Tu?i
//B?nh viêm gan d?nh nghia thông qua enum {A,B,C}
//
//Xây d?ng l?p b?nh vi?n g?m s? b?nh nhân n và con tr? *A các b?nh nhân du?c d?c t? t?p tin "bn.txt"
//Nh?p t? file
//xu?t danh sách ra màn hình
//S?p x?p theo tên tang d?n 
//Tính tu?i trung bình c?a t?ng lo?i b?nh A,B,C n?u không có in ra ko có
//Tìm B?nh nhân cao tu?i nh?t theo t?ng lo?i b?nh A,B,C n?u ko có in ra ko có

#include<bits/stdc++.h>
#include<windows.h>
#include"vector.cpp"
using namespace std;
enum Benh{A='A',B='B',C='C'};
//istream &operator>>(istream &is,Benh &b)
//{
//	char c;
//	is>>c;
//	b=static_cast<Benh>(c);
//	return is;
//}
ostream &operator<<(ostream &os,Benh b)
{
	os<<char(b);
	return os;
}
class Benhnhan
{
	string ten;
	int tuoi;
	Benh benh;
	public:
		string getten() {return ten;}
		int gettuoi() {return tuoi;}
		int getbenh() {return benh;}
		friend istream &operator>>(istream &is,Benhnhan &bn)
		{
			char x[100],y[100],b;
			int t;
			is.getline(x,99); 
			sscanf(x,"%[^0-9]%d %c",y,&t,&b);
			bn.ten=y; while(bn.ten.size() && isspace(bn.ten.back())) bn.ten.pop_back();
			bn.tuoi=t;
			bn.benh=static_cast<Benh>(b);
			return is;
		}
		friend ostream &operator<<(ostream &os,Benhnhan bn)
		{
			os<<"  "<<setw(20)<<left<<bn.ten<<" || "<<setw(5)<<bn.tuoi<<" || "<<bn.benh;
			return os;
		}
};
class Benhvien
{
	Vector<Benhnhan> A;
	public:
		friend istream &operator>>(istream &is,Benhvien &bv)
		{
			int n;
			is>>n; 
			bv.A.resize(n);
			is.ignore(1);
			for(auto &x:bv.A) is>>x;
			return is;
		}
		friend ostream &operator<<(ostream &os,Benhvien bv)
		{
			for(int i=0;i<bv.A.size();i++) os<<" "<<setw(5)<<left<<i+1<<" || "<<bv.A[i]<<"\n";
			return os;
		}
		void sx()
		{
			sort(A.begin(),A.end(),[](Benhnhan x,Benhnhan y){return x.getten()<y.getten();});
		}
		double ttb(Benh k)
		{
			double s=0,d=0;
			for(auto x:A)
			if(x.getbenh()==k) s+=x.gettuoi(),d++;
			return s/(d?d:1);
		}
		void tuoitb()
		{
			for(char c='A';c<='C';c++)
			{
				double s= ttb(static_cast<Benh>(c));
				if(s==0) cout<<"\nBenh "<<c<<" khong co benh nhan";
				else cout<<"\nTuoi tb benh "<<c<<" la "<<s;
			}
		}
		string maxb(Benh k)
		{
			int Max=-1;
			string p;
			for(auto x:A)
			if(x.getbenh()==k && Max<x.gettuoi()) Max=x.gettuoi(),p=x.getten();
			return Max<0?"kc":p;
		}
		void maxbenh()
		{
			for(char c='A';c<='C';c++)
			{
				string s= maxb(static_cast<Benh>(c));
				if(s=="kc") cout<<"\nBenh "<<c<<" khong co benh nhan";
				else cout<<"\nNguoi cao tuoi nhat benh "<<c<<" la "<<s;
			}
		}
};
int menu()
{
	int select;
	system("cls");
	cout<<"\n    MENU ";
	cout<<"\n1. Doc du lieu tu tep";
	cout<<"\n2. Xuat du lieu ra file";
	cout<<"\n3. Sap xep theo ten";
	cout<<"\n4. Tuoi trung binh theo benh";
	cout<<"\n5. Tuoi cao theo benh";
	cout<<"\n6. Thoat";
	cout<<"\n Moi ban chon mon : "; cin>>select;
	if(1<=select && select <=6) return select;
	return menu();
}
int main()
{
	Benhvien B;
	fstream fio;
	int ok=0;
	do
	{
		switch(menu())
		{
			case 1:	fio.open("bn.txt",ios::in);	fio>>B; ok=1; fio.close(); break;
			case 2: 
					if(!ok) cout<<"chon mon 1 truoc";
					else { fio.open("data.txt",ios::out); fio<<B; fio.close();}
					break;
			case 3:
					if(!ok) cout<<"chon mon 1 truoc";
					else 	{B.sx();cout<<"\nDanh sach sau khi sx :\n"<<B;}
					break;
			case 4: if(!ok) cout<<"chon mon 1 truoc"; else B.tuoitb(); break;
			case 5: if(!ok) cout<<"chon mon 1 truoc"; else B.maxbenh(); break;
			default: return 0;
		}
		system("pause");
	}while(1);
}


