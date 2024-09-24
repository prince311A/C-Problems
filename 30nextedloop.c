#include<stdio.h>

int main()
{
    int r,c,n;
    printf("Enter the number for the table\n");
    scanf("%d",&n);
    for(r=1;r<=10;r++){
        for(c=n;c<=10;c++){
            printf("%d ,",c*r);
        }
        printf("\n");
    }
    return 0;
}