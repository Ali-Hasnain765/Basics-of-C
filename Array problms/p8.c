#include<stdio.h>
int main ()
{
int array [3][4]={{2,5,6,1},{7,9,3,2},{7,8,5,2}};
int i,j,mul=1;
for(i=0;i<3;i++){
    for(j=0;j<4;j++)
    mul=mul*array[i][j];
}
printf("%d\n",mul);
return 0 ;
}

