#include<stdio.h>
int main() {
int a,b,rem;
printf("Enter two integer numbers: \n");
scanf("%d%d",&a,&b);
while(b!=0){
rem=a%b;
a=b;
b=rem;
}
printf("GCD : %d\n",a);


    return 0;
}
