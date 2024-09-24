#include<stdio.h>
void prince(int a,int b);
void prince(int a,int b){
// printf("I LOVE YOU VANDANA\n");
// int i;
// for(i=1;i<=10;i++){
//     printf("%d X %d = %d\n",a,i,a*i);
// }
printf("The area of rectangle %d\n",a*b);
}

int main()
{
    int a,b;
    a = 5;
    b = 10;
    prince(5,10);
    
    return 0;
}