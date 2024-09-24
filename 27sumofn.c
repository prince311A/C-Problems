#include<stdio.h>

int main()
{
    int a,n,sum;
    a = 1;
    sum = 0;
    printf("Enter the number upto which you want sum of:\n");
    scanf("%d",&n);
    
    do{
        sum = sum +a;
        printf("The value of sum is %d + %d = %d\n",sum-a,a,sum);
        a++; 
    }while(a<=n);
    return 0;
}