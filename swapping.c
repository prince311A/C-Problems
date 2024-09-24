#include<stdio.h>

int main()
{
    int a,b;
    a = 55;
    b = 25;
    a=a+b;
    b=a-b;
    a=a-b;
    // if a/b == 2 then
    // a = a + b - a
    // b = a + a

    printf("the value of a is %d\n",a);
    printf("The value of b is %d\n",b);
    return 0;
}