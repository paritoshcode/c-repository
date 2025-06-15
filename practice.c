#include <stdio.h>
#include <stdbool.h>

int main(){
    int age = 20;
    char name[] = "tony stark";
    float cgpa=8.3;
    double pi=3.14159;
    bool answer=0;

    printf("the age is %d\n",age);
    printf("my name is %s\n",name);
    printf("the cgpa is %.1f\n",cgpa);
    printf("the value of pi is %.5lf\n",pi);
    printf("the age is above 18 %d\n",answer);
    if(answer){
        printf("the person is above 18");
    }
    else{
        printf("the person %s is under age\n",name);
    }
    
    return 0;
}