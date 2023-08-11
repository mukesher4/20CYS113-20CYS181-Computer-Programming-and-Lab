#include<stdio.h>
void main(){
int n;
scanf("%d",&n);
if(n>1&&n<25){
n=n*2;
for(int i=0;i<n;i=i+2){
for(int j=0;j<n-i-1;j++){
printf(" ");
}
for(int p=0;p<(i+1);p=p+1){
printf("* ");
}
printf("\n");
}
}
else{printf("Invalid Input");}
}