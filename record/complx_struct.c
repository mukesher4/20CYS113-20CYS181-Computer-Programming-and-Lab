#include<stdio.h>
struct complex_no
{
int real,img;
};
void main(){
int sum[1][2];
struct complex_no c[2][2];
for(int i=0;i<2;i++){
scanf("%d",&c[i][0].real);
scanf("%d",&c[i][1].img);
}
sum[0][0]=c[0][0].real+c[1][0].real;
sum[0][1]=c[0][1].img+c[1][1].img;
sum[1][0]=c[0][0].real-c[1][0].real;
sum[1][1]=c[0][1].img-c[1][1].img;
printf("%d+%di ",sum[0][0],sum[0][1]);
printf("\n");
printf("%d+%di ",sum[1][0],sum[1][1]);
}