#include <stdio.h>
#include <string.h>

int main(){
    //shoppingcart program
    char name[30]="";
    int qty=0;
    float price=0.0f;
    char curr='$';

    printf("enter the name of the product you want to buy:");
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")]='\0';

    printf("enter how many quantity you are buying: ");
    scanf("%d",&qty);

    printf("enter the price: ");
    scanf("%f",&price);
    float total=0.0f;
    total=qty*price;

    printf("you have bought %d %s",qty,name);
    printf(" and your total is %c%.2f",curr,total);

    return 0;
} 