#include <bits/stdc++.h>
using namespace std;

void nhap(double &a, double &b, int &n)
{
    cout << "Nhap can a: ";	cin >> a;
    cout << "Nhap can b: ";	cin >> b;
    cout << "Nhap n: ";	cin >> n;
}

double f(double x)
{
    return pow(x, x);
}

double solve(double a, double b, int n)
{
    double h = (b-a)/n, S = f(a) + f(b);

    for (int i=1; i<=n-1; i++)
    {
        S += 2 * f(a+i*h);
    }

    return S*h/2;
}

int main()
{
    double a, b;
    int n;
    nhap(a, b, n);
    cout << "Ket qua = " << solve(a, b, n);
    
    return 0;
}

