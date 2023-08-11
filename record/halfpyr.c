#include<stdio.h>
void main(){
int n;
scanf("%d",&n);
if(n>1&&n<25){
for(int i=0;i<n;i++){
for(int j=0;j<i+1;j++){
printf("* ");
}
printf("\n");
}
}
else{printf("Invalid Input");}
}