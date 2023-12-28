#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*
        cout << setw(5) << left << "ID"; // độ rộng 5 ký tự, căn trái ID trong khoảng độ rộng đó
        cout << setw(30) << right << "Address"; // độ rộng 30 ký tự, căn phải Address
        cout << setfill('-'); // thay ký tự ' ' bằng ký tự '-'
        cout << setw(50) << "-" << endl; // fill 50 ký tự '-'
        cout << setfill(' '); // resetfill bằng ký tự ' '
    */

    long pop1 = 247565, pop2 = 46, pop3 = 896;
    cout << "LOCATION" <<  setw(15) << "POPULATION" << endl;
    cout << "Portcity" << setw(15)  << pop1 << endl;
    cout << "Hightown"<< setw(15)  << pop2 << endl;
    cout << "Lowville" << setw(15)  << pop3 << endl;

    // lam tron so thap phan
    float n = 20.5656;
    cout << fixed << setprecision(3) << n << endl;

    return 0;
}