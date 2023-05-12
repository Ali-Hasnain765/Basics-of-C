#include<stdio.h>
int main ()
{
int array [3][4]={{2,5,6,1},{7,9,3,2},{7,8,5,2}};
int i,j,sum=0;
for(i=0;i<3;i++){
    for(j=0;j<4;j++)
    sum=sum+array[i][j];
}
printf("%d\n",sum);
return 0 ;
}

