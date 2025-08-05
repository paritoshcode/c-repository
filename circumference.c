#include <stdio.h>

int main(){
    const double pi=3.14159;
    double radius;
    double circumference;
    double area;

    printf("enter the value of radius: ");
    scanf("%lf",&radius);

    circumference=(2*radius)*pi;
    area=(radius*radius)*pi;

    printf("the value of circumference is %.4lf\n",circumference);
    printf("the value of area of circle is %.4lf",area);

    return 0;
}