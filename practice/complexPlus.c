#include<stdio.h>

typedef struct complex{
    float real;
    float imag;
}complex;
complex add(complex n1,complex n2);

int main(){
    complex n1,n2,temp;
    printf("First complex\n");

    scanf("%f %f",&n1.real,&n1.imag);

    printf("\n second complex\n");
    printf("Enter real and imaginary number:\n");
    scanf("%f %f",&n2.real,&n2.imag);

    temp = add(n1,n2);
    printf("Sum = %.1f + %.1fi",temp.real,temp.imag);
    return 0;
}

complex add(complex n1,complex n2){
    complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return temp;
}