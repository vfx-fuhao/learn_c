#include<stdio.h>

struct student{
    char name[50];
    int roll;
    float marks;
}s;

int main(){
    printf("Type data:\n")
    printf("name: ");
    scanf("%s",s.name);

    printf("id: ");
    scanf("%d",&s.roll);

    printf("grade: ",&s.marks);

    printf("Show data: ");
    printf("name: ");
    puts(s.name);
    printf("id: %d\n",s.roll);
    printf("grade: %.1f\n",s.marks);
    return 0;
}