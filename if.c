#include <stdio.h>
 int main(){
    int age;
    printf("enter the age :");
    scanf("%d",&age);

    if(age>=18){
        printf("you are eligible to vote");
    }
    else if(age<0){
        printf("you are not even born");


    }
    else{
        printf("you are not eligible to vote");
    }


    return 0;
 }