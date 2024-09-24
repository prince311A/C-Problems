#include<stdio.h>

int main()
{
    int a,n;
    n = 1;
    printf("Enter the number\n");
    scanf("%d",&a);
    do{ 
        printf("The value is %d\n",a);
        a--;
    }while(a>=n);
    return 0;
}