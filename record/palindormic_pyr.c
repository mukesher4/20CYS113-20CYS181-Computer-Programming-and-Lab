#include <stdio.h>
int main()
{
int i, j, rows;
scanf("%d", &rows);
printf("*\n");
for(i=1; i<=rows; i++)
{
for(j=1; j<=i; j++)
{
 //@start-editable@
 if (j==1) {
 printf("*");
 }
 printf("%d", j);
 //@end-editable@
}
for(j=i-1; j>=1; j--)
{
//@start-editable@
 printf("%d", j);
 //@end-editable@
}
//@start-editable@
 printf("*\n");
 //@end-editable@
}
 //@start-editable@
 //@end-editable@
 {
 //@start-editable@
 for (i = rows-1; i>=1;i--) {
 for (j=1;j<=i;j++) {
 if (j==1) {
 printf("*");
 }
 printf("%d", j);
 }
 for (j=i-1;j>=1;j--) {
 printf("%d",j);
 }
 printf("*\n");
 }
 //@end-editable@
 }
printf("*\n");
return 0;
}