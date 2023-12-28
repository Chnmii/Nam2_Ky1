#include<bits/stdc++.h>
using namespace std;

enum benh{
	A,B,C
};

istream &operator>>(istream &is, benh &t){
	string gan;
	is>>gan;
	if(gan=="a"||gan=="A") t=A;
	else if(gan=="b"||gan=="B") t=B;
	else t=C;
	return is;
}

ostream &operator<<(ostream &os, benh t){
	if(t==A) os<<"A";
	else if(t==B) os<<"B";
	else os<<"C";
	return os;
}

class BN{
	string ten;
	int tuoi;
	benh t;
	public:
		string get_ten(){
			return ten;
		}
		int  get_tuoi(){
			return tuoi;
		}
		benh get_benh(){
			return t;
		}
		friend istream &operator >>(istream &is, BN &x){
			getline(is,x.ten);
			is>>x.tuoi>>x.t;
			return is;
		}
		friend ostream &operator<<(ostream &os,BN x){
			os<<setw(20)<<left<<x.ten<<"||"<<setw(6)<<x.tuoi<<"||"<<setw(6)<<x.t;
			return os;
		}
};

string cut(string a){
	string u[30];
	int i=0;
	istringstream is(a);
	while(is>>u[i]) i++;
	return u[i-1];
}

bool ss(BN a, BN b){
	string a1=cut(a.get_ten()),b1=cut(b.get_ten());
	if(a1==b1)
		return a.get_ten()<b.get_ten();
	return a1<b1;
}

class benhvien {
	int n;
	BN *a;
	public:
		benhvien(){
			n=0;
			a=NULL;
		}
		~benhvien()  {if(a) delete[]a;}
		
		void nhap(){
			ifstream fin("bn.txt");
			fin>>n;
			a = new BN[n+1];
			for(int i=0;i<n;i++){
				fin.ignore(1);
				fin>>a[i];
			}
			fin.close();
		}
		
		void sapxep(){
			sort(a,a+n,ss);
		}
		
		void xuat(){
			for(int i=0;i<n;i++)
				cout<<a[i]<<"\n";
		}
		
		void tuoitb(){
			int d[3]={}, D[3]={};
			for(int i=0;i<n;i++){
				if(a[i].get_benh()==A){
					d[0]++;
					D[0]+=a[i].get_tuoi();
				}
				else if (a[i].get_benh()==B){
					d[1]++;
					D[1]+=a[i].get_tuoi();
				}
				else if (a[i].get_benh()==C){
					d[2]++;
					D[2]+=a[i].get_tuoi();
				}
			}
			for(int i=0;i<3;i++){
				if(d[i]==0)
					cout<<"\nKhong co benh nhan nao co benh "<<static_cast<char>(i+'A');
				else 
					cout<<"\nTuoi trung binh cua benh "<<static_cast<char>(i+'A')<<": "<<1.0*D[i]/d[i];
			}
		}
		void dem(){
			int m[]={};
			BN k[3];
			int d[3]={};
			for(int i=0;i<n;i++){
				if(a[i].get_benh()==A){
					if(a[i].get_tuoi() >=m[0])
						m[0]=a[i].get_tuoi();	
				}
				if(a[i].get_benh()==B){
					if(a[i].get_tuoi() >=m[1])
						m[1]=a[i].get_tuoi();	
				}
				if(a[i].get_benh()==C){
					if(a[i].get_tuoi() >=m[2])
						m[2]=a[i].get_tuoi();	
				}
			}
			for(int i=0;i<n;i++){
				if(m[0]==a[i].get_tuoi()){
					d[0]++;
					k[0]=a[i];
				}
				if(m[1]==a[i].get_tuoi()){
					d[1]++;
					k[1]=a[i];
				}
				if(m[2]==a[i].get_tuoi()){
					d[2]++;
					k[2]=a[i];
				}
			}
			for(int i=0;i<3;i++){
				if(d[i]==0)
					cout<<"\nKhong co benh nhan nao co benh "<<static_cast<char>(i+'A');
				else
					cout<<"\nBenh nhan co tuoi cao nhat co benh "<<static_cast<char>(i+'A')<<": \n "<<k[i];
			}
		}
};

int main(){
	benhvien H;
	H.nhap();
	cout<<"Danh sach benh nhan la: \n";
	H.xuat();
	H.sapxep();
	cout<<"Danh sach benh nhan sau sap xep la: \n";
	H.xuat();
	H.tuoitb();
	H.dem();
}









