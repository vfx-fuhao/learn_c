#include<stdio.h>

int main(){
    int number,i;

    printf("Type a integer: ");
    scanf("%d",&number);

    printf("divisor of %d is ",number);
    for(i=1;i<=number;++i){
        if(number%i==0){
            printf("%d\n",i);
        }
    }
    return 0;
}