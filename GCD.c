#include<stdio.h>
int main() {
int A, B, GCD;
printf("Enter two integer number = \n");
scanf("%d%d",&A,&B);
if (A!=B) {
if (A>B) {
 GCD  =(A%B);
 printf ("%d is the required GCD",GCD );
}
}

return 0;
}
















