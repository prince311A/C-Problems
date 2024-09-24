#include<stdio.h>

int main()
{
    int i,n,a,b,c;
    a =0;
    b=1;
    printf("Enter the number for the series\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++){

        c = a+b;
        printf("The value of sum is %d\n",c);
        a=b;
        b=c;

    }
    return 0;
}