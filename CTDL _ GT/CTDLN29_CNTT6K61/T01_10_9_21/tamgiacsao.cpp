#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y)
{
	COORD pos = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
int main()
{
	int n=10;
	for(int i=0;i<n;i++)
	{
		gotoxy(2*n-2-2*i,i);
		for(int j=1;j<=i*2+1;j++) printf("* ");
		printf("\n");
	}
}


