#include<stdio.h>

int main()
{
    int a,n,fac;
    a = 1;
    n = 5;
    fac = 1;
    factorial:
    fac = fac*a;
    a++;
    if(a<=n)goto factorial;
    printf("The factorial of number is %d",fac);
    return 0;
}