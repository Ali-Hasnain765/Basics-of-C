#include<stdio.h>
#define Pi 3.14
int main (){
float radius, area;
printf("Enter the radius of circle:\n");
scanf("%f",&radius);
area= Pi * radius *radius;
printf("Area of the circle:\n%f",area);
return 0;
}
