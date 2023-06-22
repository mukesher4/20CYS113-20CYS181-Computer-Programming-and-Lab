#include <stdio.h>

struct compno{
	int real;
	int complex;
	int result;
};

void main(){
	struct compno cn[2];
	printf("Enter real part of complex no. 1 & 2");
	scanf("%d%d",&cn.real[0],&cn.real[1]);
	printf("Enter complex part of complex no. 1 & 2");
	scanf("%d%d",&cn.complex[0],cn.complex[1]);
	cn.result[0]=cn.real[0]*cn.real[1]-cn.complex[0]*cn.complex[1];
	cn.result[0]=cn.real[0]*cn.complex[1]+cn.complex[0]*cn.real[1];

	printf("Real part of result: %d\n",cn.result[0]);
	printf("Complex part of result: %d\n",cn.result[1]);
}