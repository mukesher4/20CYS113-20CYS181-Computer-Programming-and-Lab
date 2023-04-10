#include <stdio.h>

int main(){
	int n , sum;
	printf("Enter n : ");
	scanf("%d", &n);
	if (n<0){
		n=-n;
		sum=(n*(n+1)/2);
		sum=-sum;
	}
	else{
		sum=(n*(n+1)/2);
	}
	printf("Sum of first %d numbers is : %d",n,sum);
}
