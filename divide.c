#include<stdio.h>

int main(){
    int dividend,divisor,quotient,remainder;
    printf("Type dividend: ");
    scanf("%d",&dividend);
    printf("Type divisor: ");
    scanf("%d",&divisor);

    quotient = dividend / divisor;
    remainder = dividend % divisor;
    printf("quotient = %d\n",quotient);
    printf("remainder = %d",remainder);
    return 0;
}