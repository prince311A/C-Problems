#include<stdio.h>

int main()
{
    int a,n,mul;
    a = 1;
    mul = 0;
    printf("Enter the number for which you want to sum of multiplicated values:\n");
    scanf("%d",&n);
    do{
        mul = mul+ n*a;
        printf("The value is %d\n", mul);
        a++;
    }while(a<=10);
    
    return 0;
}