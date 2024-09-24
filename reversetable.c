#include<stdio.h>

int main()
{
    int a,n;
    printf("Enter the number table for\n");
    scanf("%d",&n);
    a = 12;
    do{
        printf("%d x %d = %d\n",n,a,a*n);
        a--;
    }while(a>=1);
    return 0;
}