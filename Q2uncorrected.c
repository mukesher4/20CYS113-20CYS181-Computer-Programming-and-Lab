#include <stdio.h>

int main(){
	int n,a=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=n-1;j>1;j--){
			printf(" ");
		}
		for(int j=0;j<i+1;j++){
			if(j==0||(i==j)){
				a=1;
				printf("%d",a);
			}
		}
	}
