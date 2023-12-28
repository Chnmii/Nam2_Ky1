#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c;
	scanf("%f%f%f", &a, &b, &c);
	
	if (a+b==2*c || a+c==2*b || b+c==2*a){
		float C= a+b+c, P=C/2;
		float S= sqrt(P*(P-a)*(P-b)*(P-c));
		printf("\n%.2f\n%.2f", 1.0*C, 1.0*S);
	}
	else
		printf("khong la tam giac");
}