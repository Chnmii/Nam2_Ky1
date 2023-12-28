#include <bits/stdc++.h>
using namespace std;

enum Benh{A = 'A', B = 'B', C = 'C'};
istream &operator>>(istream &is, Benh &b)
{
	char c;
	is >> c;
	b = static_cast<Benh> (c);
	/* switch(c)
	{
		case 'A':	b=A; break;
		case 'B':	b=B; break;
		default :	b=C;
	};*/
	return is;
}

ostream &operator<<(ostream &os, Benh b)
{
	os << char(b);
	return os;
}

class Benhnhan
{
	string ten;
	int tuoi;
	sick s;
	public:
		string get_ten() {return ten;}
		int get_tuoi() {return tuoi;}
		sick get_benh() {return s;}
		
		friend istream & operator >> (istream &is, benhnhan &a)
		{
			is.egnore(1);
			getline(is,a.ten);
			is >> a.tuoi >> a.s;
			return is;
		}
		
		friend ostream & operator << (ostream &os, benhnhan a)
		{
			os << setw(20) << left << a.ten << "||" << setw(8) << a.tuoi << "||" << setw(8) << a.s;
			return os;
		}

};

int main()
{

}

