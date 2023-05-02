#include <stdio.h>
#include <math.h>

int main(){
	double t, T;
	printf("Enter time (in hours) from when freezer is not working : ");
	scanf("%lf",&t);
	T=((4*pow(t,2))/(t+2)-20);
	printf("The current temperature in celsius is : %f ", T);


	return 0;
}
