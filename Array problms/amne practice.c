#include <stdio.h>

int main() {
float a,b,c,d,x,y,z;
scanf("%d%d%d%d",&a,&b,&c,&d);
x= (a+b+c+d)/4;
printf("Media: %.1f",x);
if (x>=7.0)
    printf("Aluno aprovado.\n");
 else if(x<5.0)
printf("Aluno reprovado.\n");
else if (x>=5.0 && x<=6.9) {
printf("Aluno em exame.\n");
printf("Nota do exame: \n");
scanf("%f",&y);
z=(x+y)/2;
if (z>=5.0)
    printf("Aluno aprovado.\n");
 else if (z<=4.9)
    printf("Aluno reprovado.\n");
}
printf ("Media final: %.1f",z);








    return 0;
}
