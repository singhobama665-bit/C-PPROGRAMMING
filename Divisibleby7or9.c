#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number : ");
    scanf("%d", &x);

    if(x%7==0 || x%9==0){printf("The entered Value is Divisible by 7 or 9");}
    else{printf("The number is not divisible by 7 or 9");}

    return 0;
}