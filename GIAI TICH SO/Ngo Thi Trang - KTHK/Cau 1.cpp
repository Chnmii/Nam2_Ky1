// Ho ten: Ngo Thi Trang
// MSV: 201200371
// Lop: CNTT6 - K61
// Ngay thi: 18/12/2021
// De so: 7

#include <bits/stdc++.h>
using namespace std;

double f(double &x)
{
	double s = pow(x,3) - 0.2*pow(x,2) - 0.2*x - 1.2;
	return s; 
} 

double sol(double a, double b, double e)
{
	double x0, x1;
	if(f(a) < 0)
		swap(a,b);
	else
		x0 = b;
	
	x1 = x0 - (f(x0) / (f(a) - f(x0))) * (a - x0);
	while(abs(x1-x0) > e)
	{
		x0 = x1;
		x1 = x0 - (f(x0) * (a - x0) / (f(a) - f(x0)));
	}
	return x1;
}
 
int main()
{
	cout << "Kq = " << sol(1, 1.5, 0.002); 
}

