#include<stdio.h>

int main(){
    float number;
    printf("Type a float num: ");
    scanf("%f",&number);
    if (number<0){
        printf("The num is less than 0");
    }
    else if (number>0){
        printf("The num is greater than 0");
    }
    else{
        printf("The num is equal 0");
    }
    return 0;
}