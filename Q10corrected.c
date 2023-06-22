#include <stdio.h>

struct compno{
	int real;
	int complex;
	int result;
};

void main(){
	struct compno cn[2];
	printf("Enter real part of complex no. 1 & 2");
	scanf("%d%d",&cn[0].real,&cn[1].real);
	printf("Enter complex part of complex no. 1 & 2");
	scanf("%d%d",&cn[0].complex,&cn[1].complex);
	cn[0].result=cn[0].real*cn[1].real-cn[0].complex*cn[1].complex;
	cn[1].result=cn[0].real*cn[1].complex+cn[0].complex*cn[1].real;

	printf("Real part of result: %d\n",cn[0].result);
	printf("Complex part of result: %d\n",cn[1].result);
}