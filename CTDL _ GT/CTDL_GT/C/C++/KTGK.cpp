#include <bits/stdc++.h>
using namespace std;

class QLBC
{
    string ma, ten; 
    double doanhthu;
    public:
        QLBC() {ma = ""; ten = ""; doanhthu = 0;}

        friend istream &operator >> (istream &is, QLBC &a)
        {
            cout << "Nhap ma co so: ";
            fflush(stdin);
            getline(is, a.ma);
            cout << "Nhap ten hang: ";
            getline(is, a.ten);
            cout << "Nhap doanh thu: ";
            cin >> a.doanhthu;
            return is;
        }

        void thongke()
        {
            double t[6] = {};
            if (ten == "Thuc pham") t[1] += doanhthu * 0.11;
            if (ten == "Giay dep") t[2] += doanhthu * 0.5;
            if (ten == "My pham") t[3] += doanhthu * 0.15;
            if (ten == "Gia dung") t[4] += doanhthu * 0.1;
            if (ten == "Quan ao") t[5] += doanhthu * 0.13;

            for(int i=1; i<6; i++)
            {
                cout << t[i];
            }

            double max = t[1];
            for (int i=1; i<6; i++)
            {
                if (max < t[i]) max = t[i];
            }

            for (int i=1; i<6; i++)
            {
                if (max = t[i]) cout << "";
            }
        }

};

int main()
{
    QLBC a;
    cin >> a;
    a.thongke();

}