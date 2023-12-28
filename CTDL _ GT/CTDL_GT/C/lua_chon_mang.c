#include <stdio.h>
#include <math.h>

int main()
{
    long a[100];
    for (int i=0; i<100; i++)
        scanf("%ld", &a[i]);
    for (int i=0; i<100; i++)
    {
        if (a[i]<=10)
            printf("A[%d] = %ld", i, a[i]);
    }
}