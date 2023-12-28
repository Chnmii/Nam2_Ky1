#include <bits/stdc++.h>
using namespace std;
class Sach{
	private:
		static int soluong;
		string m_ten;
	public:
		Sach(string ten);
		~Sach();
		static int sothucthe(); // tra ve so doi tuong da duoc tao ra
};
int Sach::soluong = 0;  // khoi tao bien dem so luong = 0

Sach::Sach(string ten) : m_ten(ten){
	soluong++;  // khi co them 1 sach thi bien dem tang
}
Sach::~Sach(){
	soluong--;  // khi xoa 1 sach thi bien dem giam
}

int main(){
	Sach a("Giai tich");
	Sach b("Lap trinh");
	cout << "Co tat ca " << Sach::sothucthe() << " sach." << endl;
	return 0;
}
