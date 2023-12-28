#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y)
{
    COORD pos = {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANLE), pos);

}
int main()
{
    int n=10;
    for (int i=0; i<n; i++)
    {
        gotoxy(2*n-2*i, i);
        
    }
}