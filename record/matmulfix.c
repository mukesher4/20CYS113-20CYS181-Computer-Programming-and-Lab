#include<stdio.h>
int main(){
 int array1[3][3],array2[3][3],array3[3][3],k=0;
 for(int i=0;i<3;i++){
 for(int j=0;j<3;j++){
 scanf("%d",&array1[i][j]);
 }
 }
 for(int i=0;i<3;i++){
 for(int j=0;j<3;j++){
 scanf("%d",&array2[i][j]);
 }
 }
 for(int i=0;i<3;i++){
 for(int j=0;j<3;j++){
 array3[i][j]=0;
 for(int p=0;p<3;p++){
 array3[i][j]+=array1[i][p]*array2[p][j];
 }
 }
 }
 for(int i=0;i<3;i++){
 for(int j=0;j<3;j++){
 printf("%d ",array3[i][j]);
 }
 printf("\n");
 }
 return 0;
}