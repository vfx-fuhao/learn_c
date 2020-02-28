#include<stdio.h>

int main(){
    int data[5],i;
    printf("Enter components: ");

    for(i=0;i<5;++i){
        scanf("%d",data+i);
    }
    printf("Your number is:\n");
    for(i=0;i<5;++i){
        printf("%d\n",*(data+i));
    }
    return 0;
}