#include<stdio.h>

int lcm_calculate(int n1,int n2);
int lcm_compare(int n1,int n2);

int main(){
    int n1,n2,n3,i,gcd,lcm;

    printf("Type two integer positive number:");
    scanf("%d %d",&n1,&n2);
    printf("Enter 0 to use cal_func 1 for compare_func:");
    scanf("%d",n3);
    if (n3>0){
        lcm = lcm_compare(n1,n2);
        
    }
        lcm = lcm_calculate(n1,n2);
    printf("The LCM of %d and %d is %d",n1,n2,lcm);
    return 0;    
}

int lcm_calculate(int n1,int n2){
    int i,gcd,lcm;
    for (i=1;i<=n1&&i<=n2;++i){
        if(n1%i==0&&n2%i==0)
            gcd = i;
    }
    lcm = (n1*n2)/gcd;
    return lcm;
}

int lcm_compare(int n1,int n2){
    int minMultiple,lcm;
    minMultiple = (n1>n2)?n1:n2;
    while(1){
        if(minMultiple%n1==0&&minMultiple%n2==0){
            lcm = minMultiple;
            break;
        }
        ++minMultiple;
        
    }
    return lcm;
}