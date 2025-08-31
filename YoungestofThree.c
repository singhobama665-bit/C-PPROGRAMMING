#include<stdio.h>
int main()
{
    int a;
    printf("Enter first person Age : ");
    scanf("%d", &a);

    int b;
    printf("Enter second person Age : ");
    scanf("%d", &b);

    int c;
    printf("Enter third person Age : ");
    scanf("%d", &c);

    if(a<c && a<b){printf("%d is Youngest", a);}
    if(b<c && b<a){printf("%d is Youngest", b);}
    else{printf("%d is Youngest", c);}

    return 0;
}