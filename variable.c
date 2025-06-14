#include <stdio.h>
#include <stdbool.h>//this is to include boolien datatype

int main(){
    int age = 25;
    int year = 2025;
    int quantity = 5;
    float price = 100.50;
    double pi = 3.14159;
    char grade = 'A';
    char name[] = "tony stark";
    bool isonline = true;


    printf("you are %d years old \n",age);//this is simple integer value
    printf("it is year %d \n",year);
    printf("the quantity of the product is %d \n",quantity);
    printf("you payable price is ₹%.1f/n",price);//this i a float value
    printf("value of pi is %lf\n",pi);
    printf("the garde you have got is an %c\n",grade);//here we are printing a char
    printf("hello %s\n",name);//this we are printing an array this is like string
    printf("%d\n",isonline);
   
   
    return 0;
}