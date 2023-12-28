#include <stdio.h>
#include <string.h>

int main(){
	long n;
	scanf("%ld\n", &n);
	char s[n];
	scanf("%s", s);

    for (int i=n-1; i>=0; i--)
		printf("%c", s[i]);

    return 0;
}