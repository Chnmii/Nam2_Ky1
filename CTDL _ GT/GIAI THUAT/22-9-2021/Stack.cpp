#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main()
{
	stack<int> S; // khai bao mot stack rong chua ptu kieu int
	for (int x:{4,7,2,8,1,6}) S.push(x);
	
	while (not S.empty())
	{
		cout << S.top(); // xem ptu nao lon nhat
		S.pop();   // lay ra ko tra ve gtri
		
	}
}

