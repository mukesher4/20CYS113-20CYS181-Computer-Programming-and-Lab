#include <stdio.h>
#include <math.h>
int main(){
	double D,a,b,c,x1,x2;
	printf("Enter a, b, c where ax^2+bx+c=0 is a quadratic equation\n");
	scanf("%lf%lf%lf", &a, &b, &c);
	D=pow((pow(b,2)-4*a*c),0.5);
	x1=(D-b)/(2*a);
	x2=(-D-b)/(2*a);	
	printf("Root-1 : %lf\nRoot-2 : %lf\n",x1,x2);
	
	return 0;
}
