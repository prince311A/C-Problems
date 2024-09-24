#include<stdio.h>

int main()
{
    int a,n;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(a = 1;a<=n;a++){
        if(a%2 == 0){
        printf("%d\n",a);
    }
    }
    return 0;
}