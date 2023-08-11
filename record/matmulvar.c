#include<stdio.h>
int main(){
 int m,n;
 scanf("%d",&m);
 scanf("%d",&n);
 int array1[m][m],array2[n][n],array3[m][m],k=0;
 if(m==n){
 for(int i=0;i<m;i++){
 for(int j=0;j<m;j++){
 scanf("%d",&array1[i][j]);
 array3[i][j]=0;}}
 for(int i=0;i<m;i++){
 for(int j=0;j<m;j++){
 scanf("%d",&array2[i][j]);
 }
 }
 for(int i=0;i<m;i++){
 for(int j=0;j<m;j++){
 for(int p=0;p<m;p++){
 array3[i][j]+=array1[i][p]*array2[p][j];
 }
 }
 }
 for(int i=0;i<m;i++){
 for(int j=0;j<m;j++){
 printf("%d ",array3[i][j]);
 }
 printf("\n");
 }
 }
 return 0;
}