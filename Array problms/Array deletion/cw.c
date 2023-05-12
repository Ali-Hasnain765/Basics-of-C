//check_shamim_inbox_WP


#include<stdio.h>
int main() {
int a[100],newindex,newindex2,i,n;
printf("enter number of elements in array\n");
scanf("%d",&n);
printf("enter %d elements \n",n);

for(i=0; i<n; i++){
    scanf("%d",&a[i]);
}

printf("\nEnter the index from where you want to delete\n");
    scanf("%d%d",&newindex,&newindex2);

    for (i=newindex;i<n-1; i++)
        a[i]=a[i+1];

        for (i=newindex2-1; i<n-2; i++){
            a[i]=a[i+1];
        }

        for (i=0; i<n-2; i++){
            printf("%d\t",a[i]);
        }
    return 0;
}
