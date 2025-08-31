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

    int d;
    printf("Enter The Number : ");
    scanf("%d", &d);

    if(a>b && a>c && a>d){printf("%d is Greatest", a);}
    if(b>a && b>d && b>c){printf("%d is Greatest", b);}
    if(c>a && c>b && c>d){printf("%d is Greatest", c);}
    else{printf("%d is Greatest", d);}

    return 0;
}