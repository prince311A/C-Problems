#include<stdio.h>

int main()
{
    int a,n,r;
    printf("Enter the above three digit number\n");
    scanf("%d",&n);
    a = 0;
    do{
    
        r = n%10;
        a = a*10+r;
        n/=10;
        printf("%d",r);
    }while(n != 0);
    return 0;
}