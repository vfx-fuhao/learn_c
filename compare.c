#include<stdio.h>

int main(){
    int a,b;
    printf("Type a int: ");
    scanf("%d",&a);

    printf("Type a int: ");
    scanf("%d",&b);
    if (a>b){
        printf("%d is greate than %d",a,b);
    }
    else{
        printf("%d is less than %d",a,b);
    }
}