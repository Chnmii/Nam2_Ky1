#include<bits/stdc++.h>
using namespace std;
int main()
{
	priority_queue<int>  Q;
	for(int x:{43,75,24,53,58,62,24}) Q.push(x);
		
	while(Q.size())
	{
		cout<<Q.top()<<" ";
		Q.pop();
	}

}


