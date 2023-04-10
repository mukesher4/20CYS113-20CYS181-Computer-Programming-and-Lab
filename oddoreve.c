#include <stdio.h>
int main(){
	int n;
	printf("Enter number to be checked for : ");
	scanf("%d",&n);
	if (n%2==0){
		if (n!=0){
			printf("%d is even",n);
		}
		else{
			printf("%d is neither even nor odd ",n);
		}
	}
	else{
		printf("%d is odd",n);
	}
}
