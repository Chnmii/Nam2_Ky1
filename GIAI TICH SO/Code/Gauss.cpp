#include<bits/stdc++.h>
using namespace std;

struct gauss
{
	int n;
	double a[100][100];
	void read(string fname)
	{
		
		ifstream fin(fname); //(C++ 11)
		//fstream fin; fin.open(fname,ios::in); (C ++)
		fin >> n;
		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= n + 1; j++)
				fin >> a[i][j];
				
		fin.close();
	}
	void write()
	{
		for(int i = 1; i <= n; i++)
			{
				for(int j = 1; j <= n + 1; j++)
					cout << a[i][j] << " " ;
				cout << "\n";
			}
	}
	
	void equal(int u, int v, double p)//A[u]+=A[v]*p	
	{
		for(int j = 1; j <= n + 1; j++)
			a[u][j] += a[v][j] * p;
	}
	
	void forward()
	{
		for(int i = 1; i < n; i++)
		{
			if(a[i][i] == 0)
				for(int j = i + 1; j <= n; j++) 
					if(a[j][i]) 
					{
						equal(i,j,1);
						break;
					}
			for(int j = i + 1; j <= n; j++)
				equal(j, i, -a[j][i]/a[i][i]);
		}
	}
	void backward()
	{
		double x[100];
		for(int i = n; i >= 1; i--)
		{
			double t = a[i][n+1];
			for(int j = i + 1; j <= n; j++) t -= a[i][j] * x[j];
			x[i] = t/a[i][i];
		}
		for(int i = 1; i <= n; i++) 
			cout << "\nx[" << i << "]=" << setprecision(2) << x[i];
	}
};

int main()
{
	gauss G;
	G.read("mths.txt");
	G.write();
	G.forward();
	G.backward();
}

