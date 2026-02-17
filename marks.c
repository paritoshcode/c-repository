#include <stdio.h>
int main(){
    float marks;
    printf("Enter your marks: ");
    scanf("%f", &marks);

    if(marks > 100){
        printf("Invalid marks\n");
    }
    else{
        if(marks >= 90){
            printf("Grade: A\n");
        }
        else if(marks >= 80){
            printf("Grade: B\n");
        }
        else if(marks >= 70){
            printf("Grade: C\n");
        }
        else if(marks >= 60){
            printf("Grade: D\n");
        }
        else if(marks >= 0){
            printf("Grade: F\n");
        }
    
    }
    return 0;
}