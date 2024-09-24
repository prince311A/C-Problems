#include<stdio.h>

int main()
{
    int n,rev,rem,sum,count;
    count = 0;
    sum = 0;
    rev = 0;
    printf("Enter the number\n");
    scanf("%d",&n);
    do{
        rem = n%10;
        n = n/10;
        printf("%d",rem);
        sum = sum + rem;
        count++;
    }while(n != 0);
    printf("\n%d is the sum",sum);
    printf("\n%d is the count",count);
    // do{
    //     rem = n%10;
    //     rev = rev * 10 + rem;
    //     n = n/10;

    // }while(n != 0);
    // printf("The reverse of digit is %d",rev);
    return 0;
}