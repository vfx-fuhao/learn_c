#include<stdio.h>

int main(){
    char operator;
    double a,b;
    printf("Enter operator (+,-,*,//):");
    scanf("%c",&operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf",&a,&b);
    //printf("%lf %lf",a,b);

    switch(operator){
        case '+':
            printf("%.1lf + %.1lf = %.1lf",a,b,a+b);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf",a,b,a-b);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf",a,b,a*b);
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf",a,b,a/b);
            break;
        default:
            printf("Error! operator is not correct");
    }
    return 0;
}