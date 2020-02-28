#include<stdio.h>

int main(){
    int n,reversedInteger = 0,remainder,originalInteger;

    printf("Type a int num: ");
    scanf("%d",&n);
    originalInteger = n;
    while(n!=0){
        remainder = n%10;
        reversedInteger = reversedInteger*10 + remainder;
        n /= 10;
    }
    if(originalInteger==reversedInteger)
        printf("%d is palindrome number",originalInteger);
    else 
        printf("%d is not palindrome number",originalInteger);
    return 0;
}