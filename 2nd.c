#include <stdio.h>
#include <string.h>

int main(){
    int age;
    char name[50];

    printf("enter your name:");
    fgets(name, 50,stdin);
    name[strlen(name)-1]='\0';

    printf("enter the age : ");
    scanf("%d",&age);

    printf("hello %s\n",name);
    printf("your age is %d\n",age);




    return 0;
}