#include <bits/stdc++.h>
using namespace std;

char viethoa(char c)
{
	if (c >= 'a' and c <= 'z')	
		return c = c-'a'+'A';
	return c;
	
	
}
main()
{
	char x[30] = "hom nay dep troi";
	/*
	x[6]='\0'; // x[6] = 0;
	printf("%s", x);
	*/
	
	// viet hoa tat ca chu trong xau
	scanf("%[^\n]", x); // %[^0-9]: ko doc tu 0 den 9
	for (int i=0; i<strlen(x); i++)
		x[i] = viethoa(x[i]);
	printf("%s", x);
	
	for (char *p=x; *p; p++)  *p = viethoa(*p);
	printf("%s", x);
	
	
}
