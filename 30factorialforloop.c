#include<stdio.h>

int main()
{
    long int a,n,mul;
    mul = 1;
    printf("Enter the number for factorial\n");
    scanf("%d",&n);
    for(a=n;a>=1;a--){
        mul = mul * a;
        
    }
    printf("The value of factrial is %d",mul);
    return 0;
}