#include<stdio.h>

int main()
{
    float sp, cp;
    printf("Enter the selling price and cost price\n");
    scanf("%f%f", &sp,&cp);
    sp>cp ? printf("You are in profit") : printf("You are in loss");
    return 0;   
}