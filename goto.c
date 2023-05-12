#include <stdio.h>
int main() {
int language = 8;
printf("Enter your language:\n");
    scanf("%d",&language);
switch(language) {

case 1 :
printf("C#\n");
break;


case 2 :
printf("C\n");
goto b;
break;
b:
case 5 :
printf ("C++\n");


default:
printf("other programming language\n");
return 0 ;

}

}
