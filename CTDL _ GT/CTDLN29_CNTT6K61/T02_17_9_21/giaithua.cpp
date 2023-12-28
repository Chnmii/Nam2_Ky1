//giai thua
#include<bits/stdc++.h>
using namespace std;

long long gt(int n)
{
	return n?n*gt(n-1):1;
}
int main()
{
	for(int k=0;k<10;k++) cout<<k<<" "<<gt(k)<<"\n";

}


