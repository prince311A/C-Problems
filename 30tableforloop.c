#include<stdio.h>

int main()
{
    int a,n;
    printf("Enter the number for table\n");
    scanf("%d",&n);
    for(a=10;a>=1;a--){
        printf("%d x %d = %d\n",n,a,n*a);
    }
    return 0;
}