#include <stdio.h>

int main(){
	int n,a;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		a=1;
		for(int j=n;j>i;j--){
			printf(" ");
		}
		for(int j=1;j<=i;j++){
				printf("%d ",a);
				a=a*(i-j)/j;
			}
			printf("\n");
		}
	}
