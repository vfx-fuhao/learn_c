#include<stdio.h>
int main(){
    double a,b,product;
    printf("Type two float numbers: ");
    scanf("%lf %lf",&a,&b);
    product = a * b;
    printf("result = %.2lf",product);
    return 0;
}