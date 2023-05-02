#include <stdio.h>
#define REWARDPERKM 10
int main(){
	double distance,reward;
	printf("Enter total kms travelled by salesman : ");
	scanf("%lf",&distance);
	reward=REWARDPERKM*distance;
	printf("Reward is : %.3f", reward);
	return 0;
}
