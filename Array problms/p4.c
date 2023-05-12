#include<stdio.h>
int main ()
{
    int array [7] = {1,2,3,2,4,5,1};

   int i;
   for(i=0;i<5;i++){
        if(array[i]%2!=0)
    printf("%d\n",array[i]);
   }

return 0 ;
}

