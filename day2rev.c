#include <stdio.h>
#include <stdbool.h>
#include <string.h>


int main(){
    int x=0;
    float y=0.0f;
    char class='\0';
    char name[20]="";
    
    printf("enter the name: ");
    fgets(name,sizeof(name),stdin);
    name[strcspn(name, "\n")]='\0';

    printf("enter the section: ");
    scanf(" %c",&class);

    printf("enter the age: ");
    scanf("%d",&x);

    printf("enter the height; ");
    scanf("%f",&y);


    printf("the name is %s\n",name);
    printf("the section is %c\n",class);
    printf("the age of the student is: %d\n",x);
    printf("the height of the student is %.1f\n",y);

    return 0;
}