#include<stdio.h>
int main() {
    int marks;
printf("Enter your marks");
scanf("%d",&marks);
if(marks>85 && marks <= 100)
{
printf("Congrats U scored A+");
}
else if(marks>60 && marks <= 85)
{
printf("U scored B+");
}
else if(marks>40 && marks <= 60)
{
printf("U scored C");
}
else
{
printf("U Failed sorry");
 }
 return 0;
}









