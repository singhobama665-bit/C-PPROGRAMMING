#include<stdio.h>
int main()
{
    int a;
    printf("Enter first Number : ");
    scanf("%d", &a);
    
    int b;
    printf("Enter second Number : ");
    scanf("%d", &b);

    int c;
    printf("Enter third Number : ");
    scanf("%d", &c);

    if(a+b>c && a+c>b && b+c>a){printf("a,b,c are sides of a Triangle");}
    else{printf("a,b,c are not the sides of Triangle");}
    
    return 0;
}