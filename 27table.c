#include<stdio.h>

int main()
{
    int a,n;
    a = 1;
    printf("Enter the number to want the table for:\n");
    scanf("%d",&n);
    do{
        printf("%d x %d = %d\n",n,a,n*a);
        a++;
    }while(a<=10);
    return 0;
}