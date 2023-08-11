#include <stdio.h>
int main()
{
 int rows, i, j, k;
 scanf("%d", &rows);
 rows = rows+1;
 for(j=rows-1;j>1;j--){
 for(i=0;i<rows-j;i++) {
 printf(" ");
 }
 int alphabet = 68;
 for(k=0;k<2*j-1;k++){
 printf("%c ",alphabet);
 ++alphabet;
 }
 if(j>2){
 printf("\n");
 }
 }
 for(j=0;j<rows;j++){
 for(i=0;i<rows-j;i++) {
 printf(" ");
 }
 int alphabet = 68;
 for(k=1;k<=2*j-1;k++){
 if(k>=1){
 printf("%c ",alphabet);
 ++alphabet;
 }

 }
 printf("\n");
 }
 return 0;
}