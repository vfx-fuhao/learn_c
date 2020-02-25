
#include<stdio.h>
 int main(){
     double firstNumber,secondNumber,temp;
     printf("Type first number: ");
     scanf("%lf",&firstNumber);
    
    printf("Type second number: ");
    scanf("%lf",&secondNumber);
    temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp;
    printf("After change,firstNumber = %.2lf\n,secondNumber = %.2lf",firstNumber,secondNumber);
    return 0;
 }