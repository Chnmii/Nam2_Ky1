#include <stdio.h>
#include <math.h>

int main()
{   
    int n,a,b,c;
    scanf("%d", &n);
    for (int i=0; i<n; i++)
    {
        scanf("%d%d%d", &a, &b, &c);
        if (c==0)
        {
            if (a<=9 && b<=9)
                printf("0%d:0%d - Canh cua dong lai!",a,b);
            else if (a<=9 && b>9)
                    printf("0%d:%d - Canh cua dong lai!", a,b);
                 else if (a>9 && b<=9)
                        printf("%d:0%d - Canh cua dong lai!", a,b);
                      else if (a>9 && b>9)
                            printf("%d:%d - Canh cua dong lai!", a, b);
        }
        else 
        {
            if (a<=9 && b<=9)
                printf("0%d:0%d - Canh cua mo ra!",a,b);
            else if (a<=9 && b>9)
                    printf("0%d:%d - Canh cua mo ra!", a,b);
                 else if (a>9 && b<=9)
                        printf("%d:0%d - Canh cua mo ra!", a,b);
                      else if (a>9 && b>9)
                            printf("%d:%d - Canh cua mo ra!", a, b);
        }
    
    }
}