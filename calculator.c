#include <stdio.h>
#include <math.h>
int main(){

    int choice;
    int num1;
    int num2;
    int num3;
    printf("enter first number:");
    scanf("%d",&num1);

    printf("enter secound number:");
    scanf("%d",&num2);
    
    printf("enter your choice 1.add 2. subtract 3. multiply 4.division");
    scanf("%d",&choice);
    if(choice==1){
        num3=num1+num2;
        printf("the solution is %d",num3);    
    }
    else if (choice==2){
        num3=num1-num2;
        printf("the solution is %d",num3);
    }
    else if(choice==4){
        num3=num1/num2;
        printf("the solution is %d",num3);
    }
    else if(choice==3){
        num3=num1*num2;
        printf("the solution is %d",num3);
    }
    else{
        printf("invalid choice");
    }
    
    return 0;
}