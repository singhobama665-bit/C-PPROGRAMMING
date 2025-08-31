#include<stdio.h>
int main()
{
    int cp;
    printf("Enter cost price  : ");
    scanf("%d", &cp);

    int sp;
    printf("Enter selling  price  : ");
    scanf("%d", &sp);

    if(sp>cp){printf("Seller made Profit");}
    else{printf("Seller made Loss");}

    return 0;
}