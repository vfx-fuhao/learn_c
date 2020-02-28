#include<stdio.h>

int main(){
    char c;
    printf("Type a char: ");
    scanf("%c",&c);
    if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
        printf("%c is Alpha",c);
    }
    else{
        printf("%c is not Alpha",c);
    }
    return 0;
}