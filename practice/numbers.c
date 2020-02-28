#include<stdio.h>

int main(){
    int n;
    int count = 0;
    printf("Enter a int num: ");
    scanf("%d",&n);
    while(n>1){
        printf("n is %d\n",n);
        n /= 10;
        ++count;
        printf("count is %d\n",count);
        
    }
    printf("The number's digits is %d",count);
    return 0;
}