#include<stdio.h>
#include"broker.h"
int switch1(){
    char operator;
    double n1,n2,;
    printf("Enter an Operator(+,-,*,/) :");
    scanf("%c",&operator);
    printf("Enter two operator: ");
    scanf("%lf%&lf",&n1,&n2);
    switch(operator){
    case'+';
        printf("%.1lf+%.1lf=%.1lf",n1,n2,n1+n2);
        break;
    case'-';
        printf("%.1lf-%.1lf=%.1lf",n1,n2,n1-n2);
        break;
    case'*';
        printf("%.1lf*%.1lf=%.1lf",n1,n2,n1*n2);
        break;
    default:
    printf("Error!");
    }
    return 0;
}
