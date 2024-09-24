#include<stdio.h>

int main()
{
    int a,b,c,d,e,max;
    printf("Enter the five integers\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    max = a>b ? (a>c ? (a>d ? (a>e ? a :e) :(d>e ?d : e)) : (c>d ? (c>e ? c :e) : (d>e ? d : e))) : (b>c ? (b>d ? (b>e ? b :e) : (d>e ? d : e)) : (c>d ? (c>e ? c : e) : (d>e ? d : e)));
    printf("%d is the maximum integer\n", max);
    return 0;
}