/*volume to be infused (mL)
Rate of infusion (mL/hr)*/

#include <stdio.h>

int main(){

	double vol,time,rate;
	printf("Enter volume (in mL) to be infused : ");
	scanf("%lf",&vol);
	printf("Enter time (in minutes) : ");
	scanf("%lf", &time);
	time=time/60;
	rate=vol/time;
	printf("Rate of infusion is : %f ",rate);

	return 0;
}
