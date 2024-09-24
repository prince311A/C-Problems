#include<stdio.h>

int main()
{
    int a,n;
    a = 1;
    n = 5;
    table:
    printf("%d x %d = %d\n",n,a,n*a);
    a++;
    if(a<=10)goto table;
    return 0;
}