#include<stdio.h>

int main()
{
    int a,b,num;
    printf("Enter the two integers\n");
    scanf("%d%d",&a,&b);
    printf("For addition press 1\n");
    printf("For substraction press 2\n");
    printf("For multiplication press 3\n");
    printf("For substraction press 4\n");
    scanf("%d",&num);
    if(num == 1){
        printf("The value is %d\n",a+b);
    }
    else if(num ==2){
        printf("The value is %d\n",a-b);
    }
    else if(num == 3){
        printf("The value is %d\n",a*b);
    }
    else if(num == 4){
        printf("The value is %d\n",a/b);
    }
    else{
        printf("Wrong key pressed\n");
    }
    return 0;
}