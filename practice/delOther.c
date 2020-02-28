#include<stdio.h>

int main(){
    char str[1000],ch;
    int i,frequency = 0;

    printf("Enter a string: ");
    fgets(str,(sizeof str / sizeof str[0]),stdin);

    printf("Enter char to find: ");
    scanf("%c",&ch);

    for(i = 0;str[i]!='\0';++i){
        if(ch==str[i])
            ++frequency;
    }
    printf("char %c apperance %d",ch,frequency);
    return 0;
}