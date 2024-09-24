#include<stdio.h>

int main()
{
    int a,b,c,d,max;
    printf("Enter the four integers\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    max = a>b ? (a>c ? (a>d ? a : d) : (c>d ? c : d)) : (c>b ? (c>d ? c :d) : (b>d ? b :d));
    printf("%d is the maximum integer\n", max);
    return 0;
}