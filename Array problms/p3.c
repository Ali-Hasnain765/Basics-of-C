#include<stdio.h>
int main ()
{
    int array [7] = {1,2,3,4,5,6,7};

   int i,max,min;
   max=array [i];
   min= array[i];

 for(i=1;i<7;i++){
        if(array [i]>max){
            max=array [i];
        }
        if(array [i]<min){
            min=array [i];
        }

   }
printf("%d %d\n",max,min);
return 0 ;
}
