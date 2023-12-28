// Ho ten: Ngo Thi Trang
// MSV: 201200371
// Lop: CNTT6 - K61
// Ngay kiem tra: 5/11/2021
// De so: 4
#include <bits/stdc++.h>
using namespace std;

void nhap(double &a, double &b, int &n)
{
    cout << "Nhap a: ";	cin >> a;
    cout << "Nhap b: ";	cin >> b;
    cout << "Nhap n: ";	cin >> n;
}

double f(double x)
{
    return pow(x, x) - 5;
}

double tphan(double a, double b, int n)
{
    double h = (b-a)/(2*n), S = f(a) + f(b);

    for (int i = 1; i <= 2*n - 1; i++)
    {
    	if (i%2 == 0)
        	S += 2 * f(a+i*h);
        else 
        	S += 4 * f(a+i*h);
    }

    return S*h/3;
}

int main()
{
    double a, b;
    int n;
    nhap(a, b, n);
    cout << "Ket qua = " << setprecision(3) << fixed << tphan(a, b, n);
    
    return 0;
}

