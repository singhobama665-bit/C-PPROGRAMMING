#include<stdio.h>
int main()
{
    int x;
    printf("Enter a Number :");
    scanf("%d", &x);

    if(x%5==0 && x%3==0){printf("The Number is divisible by 5 and 3");}

    else{printf("The number is not divisible by 5 and 3");}
    return 0;
}