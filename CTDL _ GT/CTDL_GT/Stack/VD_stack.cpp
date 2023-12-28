#include <bits/stdc++.h>
#include "stack.cpp"
using namespace std;

struct person
{
    string name;
	int age;
	person(string n = " ", int a=0)  {name = n; age = a;}
};

int main()
{
	Stack<int> s; // khai bao mot stack rong chua ptu kieu int
	for (int x:{4,7,2,8,1,6}) s.push(x); // xep vao stack
	
	s.top() = 9; // thay doi gtri đỉnh = 9

	while (not s.empty())  // xem stack co chua ptu nao ko
	{
		cout << s.top() << " "; // xem ptu đỉnh của stack
		s.pop();   // lay ra ko tra ve gtri
		
	}

	/* stack<person> S;
		S.push(person("chi pheo", 15));

		while (S.size())
		{
			cout << S.top().name << " " << S.top().age << "\n";
			S.pop();
		}
	*/

	/* stack<person*> s;
		person *A=new person("chi pheo", 15);

		S.push(A); 
		while (S.size())
		{
			cout << S.top()->name << " " << S.top()->age << "\n";
			S.pop();
		}

	*/
}
