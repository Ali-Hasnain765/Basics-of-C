#include <stdio.h>
int main() {
int num, count, sum = 0;
printf ("Enter a positive integer : ");
scanf("%d", &num);
for (count = 1; count <= num;  )
{
    sum += count;
    count= count +1;
}
printf ("sum = %d", sum);
return 0 ;

}



