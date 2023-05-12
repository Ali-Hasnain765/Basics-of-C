
#include<stdio.h>
int main() {
int  a[100],value,value2,i,pos,pos2,n;
printf("enter number of elements in array\n");
scanf("%d",&n);

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
for(i=n-1;i>=pos;i--)
    a[i+1]=a[i];
    a[pos]=value;
for(i=n;i>=pos2;i--)
    a[i+1]=a[i];
    a[pos2]=value2;
printf("resultant array is \n");
for(i=0;i<n+2;i++)
    printf("%d ",a[i]);
return 0;
}

