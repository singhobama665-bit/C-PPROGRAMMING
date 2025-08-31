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
    int avg = sum/5;
    printf("The average of given five subjects is : %d\n", avg);

    float grade;


    if(avg>90 && avg<100){printf("Grade : A");}
    else if(avg>80 && avg<90){printf("Grade : B");}
    else if(avg>70 && avg<80){printf("Grade : C");}
    else if(avg>60 && avg<70){printf("Grade : D");}
    else{printf("Invalid Marks Entered");}

    return 0;
}