#include<stdio.h>
int main()
{
    float x;
    printf("Enter first number : ");
    scanf("%f", &x);
    
    float y;
    printf("Enter second number : ");
    scanf("%f", &y);

    float sum = x+y;
    printf("The addition of given numbers is : %.0f\n", sum);

    float substract = x-y;
    printf("The substraction of given numbers is : %.0f\n", substract);

    float multiply = x*y;
    printf("The multiplication of given numbers is : %.0f\n", multiply);

    float divide = x/y;
    printf("The division of two numbers is : %.2f\n", divide);

    return 0;

}