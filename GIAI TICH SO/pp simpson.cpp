#include <bits/stdc++.h>
using namespace std;

void nhap(double &a, double &b, int &n)
{
    cout << "Moi nhap can a: ";	cin >> a;
    cout << "Moi nhap can b: ";	cin >> b;
    cout << "Moi nhap n: ";	cin >> n;
}

double f(double x)
{
    return pow(x, x);
}

double simpson(const double &a,const double &b, int n)
{
    double h = (b - a) / (2 * n);
	double S1 = 0, S2 = f(a + (2 * n - 1) * h);
	
    for (int i = 1; i <= n - 1; i++)
    {
        S1 += f(a + 2 * i * h);
        S2 += f(a + (2 * i - 1) * h);
    }
    return (f(a) + f(b) + 2 * S1 + 4 * S2) * h / 3;
}

int main()
{
    double a, b;
    int n;
    
    nhap(a, b, n);
    cout << "Ket qua = " << simpson(a, b, n);
    
    return 0;
}

