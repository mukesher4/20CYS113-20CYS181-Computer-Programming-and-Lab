#include<stdio.h>
void main(){
int n,i=0,x;
scanf("%d",&n);
x=n;
while(x>=1){
x=x/10;
i++;
}
int a[i],j=0;
while(n>=1){
a[j]=n%10;
j++;
n=n/10;
}
int check=0;
for(int p=0;p<i/2;p++){
if(a[p]==a[i-p-1]){
check++;
}
}
if(check==(i/2)){
printf("Is a palindrome.");
}
else{
printf("Is not a palindrome.");
}
}