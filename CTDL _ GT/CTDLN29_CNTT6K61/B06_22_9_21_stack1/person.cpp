#include<bits/stdc++.h>
#include"stack.cpp"
using namespace std;
struct person
{
	string name;
	int age;
	person(string n="",int a=0) {name=n;age=a;}
};
int main()
{
	Stack< person* > S;
	person *A=new person("chi pheo",15);
	person *B=new person("lao hac",5);
	person *C=new person("thi no",52);
	
	S.push(A);S.push(B);S.push(C);
	
	while(S.size())
	{
		cout<<S.top()->name<<" "<<S.top()->age<<"\n";
		S.pop();
	}

}


