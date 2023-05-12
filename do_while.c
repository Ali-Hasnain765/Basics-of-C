#include<stdio.h>

int main ()
{
double number , sum = 0;
printf("Enter a number:");

scanf("%lf" , &number);
do {


sum= sum+number;
printf("sum = %.2lf \n",sum);
}
while(sum < 4.0);



return 0 ;
}
