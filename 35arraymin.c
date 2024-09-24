#include<stdio.h>

int main()
{
    int a[10],i,min;
    printf("Enter the numbers\n");
    for(i=0;i<=9;i++){
        scanf("%d",&a[i]);
    }
    min = a[0];
    for(i=0;i<=9;i++){
        if(min>a[i]){
            min = a[i];
        }
    }
    printf("The minimum number is %d\n",min);
    return 0;
}