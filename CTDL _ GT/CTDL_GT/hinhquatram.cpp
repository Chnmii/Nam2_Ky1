#include <bits/stdc++.h>
using namespace std;

void QuaTram(int h)
{
    int m = h, n = h;
    for (int i = 1; i < h; i++)
    {
        for (int j = 1; j <= 2*h-1; j++)
        {
            if (j == m || j == n)
                printf("*");
            else
                printf(" ");
        }
        m--;
        n++;
        printf("\n");
    }
    for(int i = h; i >= 1; i--)
    {
        for (int j = 1; j <= 2*h-1; j++)
        {
            if (j == m || j == n)
                printf("*");
            else
                printf(" ");
        }
        m++;
        n--;
        printf("\n");
    }
}

int main()
{
    int n;
    cin >> n;
    QuaTram(n);
    return 0;

}
