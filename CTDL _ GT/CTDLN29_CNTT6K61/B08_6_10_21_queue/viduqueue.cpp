//vi du ve queue
#include<bits/stdc++.h>
#include"queue.cpp"
using namespace std;
int main()
{
	Queue<int> Q;
	
	for(auto x:{3,7,2,1,14,234,52,423,42,24,23,4,25,2,5,2,52,35,23,5,23,52,5,23,51,4,15,64,743,7}) Q.push(x);
	
	cout<<"\nQueue : "; 
	
	while(not Q.empty()) {cout<<Q.front()<<" "; Q.pop();}
	
}


