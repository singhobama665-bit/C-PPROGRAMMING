#include<stdio.h>
int main()
{
    float English;
    printf("Enter the Marks of English :");
    scanf("%f", &English);
 
    float Maths;
    printf("Enter the Marks of Maths :");
    scanf("%f", &Maths);

    float Biology;
    printf("Enter the Marks of Biology :");
    scanf("%f", &Biology);

    float Social;
    printf("Enter the Marks of Social :");
    scanf("%f", &Social);

    float Urdu;
    printf("Enter the Marks of Urdu:");
    scanf("%f", &Urdu);

    float Average = (Maths+English+Biology+Social+Urdu)/5;

    printf("The Average of These Subjects is : %f", Average);

    return 0;


}