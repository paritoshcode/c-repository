//2nd class on format specifiers
#include <stdio.h>
#include <stdbool.h>

int main(){
    int num1=1;
    int num2=10;
    int num3=-100;

    float price1=30.22;
    float price2=-3000.333;
    float price3=22.999;

    printf("%+8.2f\n",price1);
    printf("%+6.2f\n",price2);
    printf("%+7.2f\n",price3);

    printf("\n%+3d\n",num1);
    printf("%+3d\n",num2);
    printf("%+3d\n",num3);
    





    return 0;
}

