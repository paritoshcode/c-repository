#include <stdio.h>
#include <math.h>

int main(){
    double side1;
    double side2;
    double side3;

    printf("enter the side1: ");
    scanf("%lf",&side1);

    printf("enter the side2: ");
    scanf("%lf",&side2);

    side3=sqrt(pow(side1,2)+pow(side2,2));

    printf("the hypoteneues is %lf",side3);

    return 0;
}