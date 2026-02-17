#include <stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age >=18){
        printf("you are an adult\n");
    }
    else if(age >= 13){
        printf("you are a teenager\n");
    }
    else if(age >= 0){
        printf("you are a child\n");
    }
    else{
        printf("Invalid age\n");
    }




    return 0;
}