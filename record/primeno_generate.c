#include<stdio.h>
int isPrime(int n){
int number=0;
for(int i=2;i<n;i++){
if(n%i==0){number++;}
}
if(number!=0){return 0;}//not prime
else{return 1;}//prime
}
int generatePrimes(int start, int end){
for(int i=start;i<end+1;i++){
if(isPrime(i)==1){printf("%d ",i);}
}
}
void main(){
int start,end;
scanf("%d%d",&start,&end);
printf("Prime numbers between %d and %d are: ",start,end);
generatePrimes(start,end);
}