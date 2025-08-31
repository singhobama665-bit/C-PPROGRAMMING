#include<stdio.h>
int main()
{
    int a;
    printf("Enter The Number : ");
    scanf("%d", &a);

    int b;
    printf("Enter The Number : ");
    scanf("%d", &b);

    int c;
    printf("Enter The Number : ");
    scanf("%d", &c);

    if(a>b && a>c){printf("%d is Greatest ", a);}
    else if(b>a && b>c){printf("%d is Greatest ", b);}
    else{printf("%d is Greatest ", c);}

    return 0;

}