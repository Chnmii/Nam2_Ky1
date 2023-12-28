#include<bits/stdc++.h>
using namespace std;

typedef double matrix[100][100];

void nhap(int &n, matrix &a)
{
	cin >> n;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n + 1; j++) 
			cin >> a[i][j];
}

void nhapfile(int &n, matrix &a, string fn)
{
	ifstream fin(fn);
	fin >> n;
	for(int i = 1; i <= n; i++)
		for(int j = 1;j <= n + 1; j++) fin >> a[i][j];
		
	fin.close();
}

bool ktcth(int n, matrix &a)
{
	for(int i = 1; i <= n; i++)
		{	
			double t = 0;
			for(int j = 1; j <= n; j++) t += fabs(a[i][j]);
			if (t > 2 * fabs(a[i][i])) 
				return 0;
		}
	return 1;
}

/*bool ktctc(int n, matrix &a)
{
	for(int j=1;j<=n;j++)
		{	
			double t=0;
			for(int i=1;i<=n;i++) t+=fabs(a[i][j]);
			if (t>2*fabs(a[j][j])) return 0;
		}
	return 1;
}*/

void biendoi(int n, matrix &a)
{
	for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= n; j++)
			if(i!=j) a[i][j] = -a[i][j]/a[i][i];
			a[i][n+1] /= a[i][i];
			a[i][i] = 0;
		}
}

void jacobi(int n, matrix a, double eps = 0.01)
{
	double x1[100] = {}, x2[100], ss;
	do
	{
		ss = 0;	
		for(int i = 1; i <= n; i++)
		{
			x2[i] = a[i][n+1];
			for(int j = 1; j <= n; j++) x2[i] += a[i][j] * x1[j];
			if(fabs(x2[i] - x1[i]) > ss) ss = fabs(x2[i] - x1[i]);
		}
		for(int i = 1; i <= n; i++) x1[i] = x2[i];
	}
	while(ss>eps);
	cout << ss;
	cout << "Nghiem la:\n";
	for(int  i = 1; i <= n; i++) cout << x1[i] << " ";
}

void jacobicaitien(int n, matrix a, double eps = 0.0001)
{
	double x1[100] = {}, ss;
	do
	{
		ss = 0;	
		for(int i = 1; i <= n; i++)
		{ 
			double t = a[i][n+1];
			for(int j = 1; j <= n; j++) t += a[i][j] * x1[j];
			if(fabs(t - x1[i]) > ss) 
				ss = fabs(t - x1[i]);
			x1[i] = t;
		}
	}
	while(ss>eps);
	cout << "Nghiem la:\n";
	for(int i = 1; i <= n; i++) 
		cout << x1[i] << " ";
}
int main()
{
	matrix a;
	int n;
	nhap(n,a);
	//nhapfile(n,a,"jacobiMTHS.cpp");
	if(!ktcth(n,a)) 
		cout << "Ma tran ko cheo troi theo hang";
	else 
	{
		biendoi(n,a);
		jacobi(n,a);	
	}
}


