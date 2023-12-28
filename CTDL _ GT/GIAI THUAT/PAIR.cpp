#include <bits/stdc++.h>
using namespace std;

#define x first
#define y second

template <class T1, class T2>
class PAIR
{
	T1 x;
	T2 y;
	public:
		PAIR(T1 u, T2 v) {x = u; y = v;}
		T1 getmax() {return x>y?x:y;} // ep ve kieu T1
};

double kc(pair<double,double> A, pair<double,double> B)
{
	A.x -= B.x;
	A.y -= B.y;
	return sqrt(A.x*A.x + A.y*A.y);	
}

int main()
{
	PAIR<int,double> p(2,3.14);
	cout << "Max = " << p.getmax();
	
	pair<double,double> A[1000];
	int n;
	cout << "\nNhap n: "; 
	cin >> n;
	for (int i=1; i<=n; i++)
		cin >> A[i].x >> A[i].y;
	A[n+1] = A[n];
	
	double s = 0;
	for (int i=1; i<=n; i++)
		s += kc(A[i],A[i+1]);
	cout << "\nDo dai duong gap khuc: " << s;
	
}
