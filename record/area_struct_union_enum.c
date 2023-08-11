#include<stdio.h>
#include<math.h>
#define PI 3.14 //Defining the value of pi
struct Shape { //Declaring struct
union dimensions { //DEclaring union inside
float length;
floatradius;
}d;
float width;
enum type {
circle=1,
rectangle
}t;
}s;
int main () {
struct Shape s;
float area1,area2;
scanf("%d",&s.t); //Recieving Input
switch(s.t) {
case 1:
scanf("%f",&s.d.radius);
area1 = PI * pow(s.d.radius,2);
printf("Area of the circle: %.4f units\n",area1); //Area of circle
break;
case 2:
scanf("%f %f",&s.d.length,&s.width);
area2 = s.d.length * s.width;
printf("Area of the rectangle: %.4f units\n",area2); //Area of rectangle
break;
default:
printf("Invalid choice!"); //Error for other cases
break;
}
return 0;
}