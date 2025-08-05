#include <stdio.h>
#include <string.h>

int main(){
    int age;
    char name[50];

    printf("enter the nme:");
    fgets(name, 50,stdin);
    name[strlen(name)-1]='\0';

    printf("enter the age");
    scanf("%d",&age);

    printf("the name is %s \n",name);
    printf("the age is %d",age);

    return 0;
}