#include<stdio.h>

int main()
{
    long int a,n,fac;
    printf("Enter the number for factorial\n");
    scanf("%d",&a);
    n = 1;
    fac = 1;
    do{
        fac = fac*a;
        a--;
    }while(a>=n);
    printf("The factorial of number is %d\n",fac);
    return 0;
}