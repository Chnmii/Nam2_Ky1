#include<bits/stdc++.h>
#include"stack.cpp"
#include"stack.cpp"
//stack dung san trong STL = standard template Lib.
using namespace std;
int main()
{
	Stack<int> S;  //khao bao mot stack rong chua cac phan tu kieu int
	for(int x:{4,7,2,8,1,6}) S.push(x);  //push xep vao ngan xep

	S.top()=9;				  //thay doi gia tri cua dinh stack
	
	while(not S.empty())	  //kiem tra no co rong khong	
	{
		cout<<S.top()<<" ";   //top tra ve gia tri phan tu dinh cua stack
		S.pop();    	 	  //pop thao tac lay ra khong tra ve gia tri 
	}
}


