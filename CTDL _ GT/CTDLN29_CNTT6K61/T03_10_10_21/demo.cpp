#include<bits/stdc++.h>
#include"queue.cpp"
using namespace std;
int main()
{
	QUEUE<int> Q;
	for(int x:{3,7,2,1}) Q.push(x);
	Q.front()=5;
	Q.back()=6;   //5 7 2 6
	while(Q.size()) {cout<<Q.front()<<" "; Q.pop();}

}


