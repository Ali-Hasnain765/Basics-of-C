#include<stdio.h>
int main ()
{
int arr[100],i,n,src;
printf("Enter num of element : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

        scanf("%d",&arr[i]);

    }
    printf("Enter the search : ");
    scanf("%d",&src);
    for (i=0;i<n;i++)
    {
        if(arr[i] == src)
        {
            printf("Found at: %d Index",i);
            return 0;
        }
    }

    printf("Element not found");

    return 0;
}
