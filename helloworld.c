#include <stdio.h>
#include <stdbool.h>


int main(){
    int age =18;
    float cost=19.99;
    double pi=3.1415926535;



    printf("the value of pi is %.10lf\n",pi);
    printf("the cost of the pen is %.2f \n",cost);
    printf("you are %d years old\n",age);

    bool isonline=0;
    if(isonline){
        printf("you are online");
    }
    else{
        printf("you are offline");
    }

    return 0;
}