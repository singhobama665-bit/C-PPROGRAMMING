#include<stdio.h>
int main(){
    int a;
    printf("Enter Maths Marks : ", a );
    scanf("%d", &a);

    int b;
    printf("Enter physics Marks : ", b);
    scanf("%d", &b);

    int c;
    printf("Enter chemistry Marks : ", c);
    scanf("%d", &c);

    int d;
    printf("Enter english Marks : ", d);
    scanf("%d", &d);

    int e;
    printf("Enter sanskrit Marks : ", e);
    scanf("%d", &e);

    int sum = (a+b+c+d+e);
    int average = sum/5;
    printf("The average of given five subjects is : %d", average);
    return 0;
}