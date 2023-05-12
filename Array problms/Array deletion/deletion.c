#include <stdio.h>
int main()
{
   int array[100], position, i, n;

   printf("Enter number of elements in array\n");
   scanf("%d", &n);

   printf("Enter %d elements\n", n);

   for (i = 0; i < n; i++)
      scanf("%d", &array[i]);

   printf("Enter the location where you wish to delete element\n");
   scanf("%d", &position);
   for(i=position;i<=n-1;i++)
   array[i]=array[i+1];
   for(i=0;i<n-1;i++)
    printf("%d\t",array[i]);
   return 0 ;
}
