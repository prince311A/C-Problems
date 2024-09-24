#include<stdio.h>

int main()
{
    int a,sum;
    int p,q,r;
    float avg;
    sum = 0;
    printf("Enter the three number\n");
    scanf("%d%d%d",&p,&q,&r);
    // do{
    //     a = 1;
        
        sum = p+q+r;
        printf("The value is %d\n",sum);
        // a++;

    // }while(a>=100);
    printf("The average is %d\n",sum/3);
    return 0;
}