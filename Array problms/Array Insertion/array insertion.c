#include<stdio.h>
int main() {
int a[100],pos,i,n,value;
printf("enter number of elements in array\n");
scanf("%d",&n);
printf("enter %d elements \n",n);
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
printf("enter insert location\n");
scanf("%d",&pos);
printf("enter insert value\n");
scanf("%d",&value);
for(i=n-1;i>=pos;i--)
    a[i+1]=a[i];
    a[pos]=value;
printf("resultant array is \n");
for(i=0;i<n+1;i++)
    printf("%d ",a[i]);
return 0;
}
