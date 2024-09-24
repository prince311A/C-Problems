#include <stdio.h>
#include <conio.h>
void swap(int *x, int *y)
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;

    // printf("*x = %d\n",*x);
    // printf("*y = %d\n",*y);
}
void main()
{
    int a, b;
   // a = 15;
    //b = 58;
    printf("Enter the two numbers\n");
    scanf("%d%d",&a,&b);
    swap(&a, &b);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    getch();
}