#include<stdio.h>

int main(){
    int r,c,a[100][100],b[100][100],sum[100][100],i,j;
    printf("Enter rows (1~100): ");
    scanf("%d"&r);
    printf("Enter columns (1~100): ");
    scanf("%d",&c);

    printf("\nEnter row 1's components:\n");
    for(i=0;i<r;++i)
        for(j=0;j<c;++j){
            printf("Enter componet a%d%d:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    printf("Enter second's components:\n");
    for(i=0;i<r;++i)
        for(j=0;j<c;++j){
            printf("Enter components a%d%d: ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    for(i=0;i<r;++r){
        for(j=0;j<c;++j){
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\nThe result of matrix2 is:\n\n");
    
    for(i=0;i<r;++i)
        for(j=0;j<c;++j){
            printf("%d  ",sum[i][j]);

            if(j==c-1){
                printf("\n\n");
            }
        }
    return 0;
}