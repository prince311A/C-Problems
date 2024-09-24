#include<stdio.h>

int main()
{
    int a,b,c,d,min;
    printf("Enter the four integers\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    min = a<b ? (a<c ? (a<d ? a : d) : (c<d ? c : d)) : (c<b ? (c<d ? c :d) : (b<d ? b :d));
    printf("%d is the minimum integer\n", min);
    return 0;
}
///min = a<b ? (a<c ? (a<d ? a : d) : (c<d ? c : d)) : (c<b ? (c<d ? c :d) : (b<d ? b :d));