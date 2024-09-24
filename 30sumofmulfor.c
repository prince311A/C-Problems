#include<stdio.h>

int main()
{
    int a,n,mul;
    mul = 0;
    printf("Enter the value for sum of mul\n");
    scanf("%d",&n);
    for(a=1;a<=n;a++){
        mul = mul + a;
        printf("The sum is %d\n",mul);
    }
    return 0;
}