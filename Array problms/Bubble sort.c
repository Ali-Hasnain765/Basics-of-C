#include<stdio.h>
int main()
{
    int i, c, d, min, max, middle,nindex,n;
    char a[100];char nvalue,swap;
    printf("Enter how many elements you want: ");
    scanf("%d",&n);
    getchar();
    for(i=0; i<n; i++)
    {
        scanf("%c", &a[i]);
    }
    for(c=0; c<n-1; c++)
    {
        for(d=0; d<n-1-c; d++)
        {
            if(a[d]< a[d+1])
            {
                swap = a[d+1];
                a[d+1] = a[d];
                a[d] = swap;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%c\t", a[i]);
    }
    printf("\n");
    printf("Enter the value to search: ");
    getchar();
    scanf("%c", &nvalue);
    min = 0;
    max = n-1;
    middle = (min+max)/2;
    while(min<=max)
    {
        if(a[middle]<nvalue)
        {
            max = middle-1;
            middle = (min+max)/2;
        }
    else if(a[middle]>nvalue)
        {
            min = middle+1;
            middle = (min+max)/2;
        }
    else
        {
            nindex = middle;
            printf("Found The value %c at [%d] index",nvalue,nindex);
            break;
        }
    }
    printf("\n");
    for(i=nindex; i<n; i++)
    {
        a[i] = a[i+1];
    }
    printf("\n");
    for(i=0; i<n-1; i++)
    {
        printf("%c\t", a[i]);
    }
    return 0;
}
