#include<stdio.h>

int main(){
    int a;
    float b;
    double c;
    char d;
    long e;
    long long f;
    long double g;

    printf("Size of int = %ld bytes \n",sizeof(a));
    printf("Size of float = %ld bytes \n",sizeof(b));
    printf("size of double = %ld bytes\n",sizeof(c));
    printf("size of char = %ld bytes\n",sizeof(d));
    printf("size of long = %ld bytes\n",sizeof(e));
    printf("size of long long = %ld bytes\n",sizeof(f));
    printf("size of long double = %ld bytes\n",sizeof(g));
    
}