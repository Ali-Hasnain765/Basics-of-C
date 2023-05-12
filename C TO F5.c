#include<stdio.h>
int main()
{
float C,F;
printf("Enter the temp in C");
scanf("%f",&C);
F=(C*9/5)+32;
printf("%.2f C =%.2f f",C,F);
return 0;
}
