#include<stdio.h>
int main(){
FILE *file;
char name[30] ="Ali Hasnain";
int i,len= strlen(name);
file=fopen("test.txt","w");
if(file==NULL){
    printf("File does not exist \n");
}
else{
    printf("File is opened \n");
    for(i=0;i<len;i++){
        fputc(name[i],file);
    }
    printf("File is written \n");
    fclose(file);
}
return 0;
}

