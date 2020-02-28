#include<stdio.h>

int fac_iterate(int n);
int fac_recursive(int n);

int main(){
    int n,s,i;
    unsigned long long fac = 1;

    printf("Type a integer value: ");
    scanf("%d",&n);
    printf("Type 0 to use fac_iteration 1 for fac_recursive");
    scanf("%d",&s);
    if (n<0){
        printf("Error!Negative number has no factorial");
    }
    else{
        if(s>0){
            fac = fac_recursive(n);
        }
            fac = fac_iterate(n);
    }
    printf("The factorial of %d  is %ld",n,fac);
    return 0;
}

int fac_iterate(int n){
    int i,factorial = 1;
    for (i=1;i<=n;++i){
        factorial *= i;
    }
    return factorial;
}

int fac_recursive(int n){
    if(n>=1)
        return n*fac_recursive(n-1);
    else
        return 1;
    
}