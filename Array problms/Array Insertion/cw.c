
#include<stdio.h>
int main() {
int a[100],pos,pos2,i,n,value,value2;
printf("enter number of elements in array\n");
scanf("%d",&n);
printf("enter %d elements \n",n);
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
printf("enter insert location\n");
scanf("%d",&pos);
printf("enter insert value\n");
scanf("%d",&value);
printf("enter insert location\n");
scanf("%d",&pos2);
printf("enter insert value\n");
scanf("%d",&value2);
for(i=n;i>=pos;i--)
    a[i+2]=a[i];
    a[pos]=value;
    a[pos2]=value2;
printf("resultant array is \n");
for(i=0;i<n+2;i++)
    printf("%d ",a[i]);
return 0;
}
