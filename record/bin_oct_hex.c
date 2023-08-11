#include<stdio.h>
#include<math.h>
void main(){
int n;
scanf("%d",&n);
if(n<=0){
printf("Error: Value should be greater than 0");
}
else{decimalToBinary(n);decimalToOctal(n);decimalToHexadecimal(n);}
}
int decimalToBinary(int n){
if(n==0){printf("Binary equivalent: 0\n");return 0;}
int i=0,j=0;
while(pow(2,i)<=n){
i++;
if(pow(2,i)==n){i++;}
}
int a[i];
while(n>0){
if(n%2==0){a[j]=0;}
else{a[j]=1;}
n=n/2;
j++;
}
printf("Binary equivalent: ");
for(int j=i-1;j>=0;j--){printf("%d",a[j]);}
printf("\n");
}
int decimalToOctal(int n){printf("Octal equivalent: %o\n",n);}
int decimalToHexadecimal(int n){printf("Hexadecimal equivalent: %X",n);}