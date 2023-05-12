#include <stdio.h>
int main(){
  int array[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
  int sum=0,sum1=0;
  int i,j;
  for (i=0;i<3;i++){
      for(j=0;j<4;j++){
         sum=sum+array[i][j];
      }

      printf("row %d\n",sum);
      sum=0;
  }
 for(j=0;j<4;j++){
  for (i=0;i<3;i++){
      sum1=sum1+array[i][j];
  }
  printf("colum %d\n",sum1);
  sum1=0;
 }
    return 0;
}
