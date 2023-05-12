#include<stdio.h>
int main() {
int var1,var2;
printf("Enter the value of var1 and var2:");
scanf("%d%d",&var1,&var2);
if (var1>var2) {
printf("var1 is greater than var2\n");
}
else if (var1<var2) {
printf("var2 is greater than var1\n");
}
else {
printf("var1 is equal to var2\n");
}

return 0;
}
