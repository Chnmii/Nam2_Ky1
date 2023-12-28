// Ho ten: Ngo Thi Trang
// MSV: 201200371
// Lop: CNTT6 - K61
// Ngay thi: 18/12/2021
// De so: 7

//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

double f(double x)
{
	double s = sin(pow(x,3))/(pow(x,2));
    return s;
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
    int n;
    cin >> n;
    cout << "Ket qua = " << solve(1, 2, n);
    
    return 0;
}
