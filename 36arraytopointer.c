#include <stdio.h>

int main()
{
int marks[5]={101,20,10,50,40};;
    int *q, i;

    q = &marks[0];
    // for (i = 0; i < 5; i++)
    // {
    //     printf("Enter the students marks %d\n", i + 1);
    //     scanf("%d", q);
    //     //q++;
    // }
    for (i = 0; i < 5; i++)
    {
        printf("The marks of student is %d\n",*q);;
      q++;
    }

    return 0;
}