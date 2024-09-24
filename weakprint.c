#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    if (num == 1)
    {
        printf("The day is monday\n");
    }
    else if (num == 2)
    {
        printf("The day is tuesday\n");
    }
    else if (num == 3)
    {
        printf("The day is wednesday\n");
    }
    else if (num == 4)
    {
        printf("The day is thursday\n");
    }
    else if (num == 5)
    {
        printf("The day is friday\n");
    }
    else if (num == 6)
    {
        printf("The day is saturday\n");
    }
    else if (num == 7)
    {
        printf("The day is sunday\n");
    }
    else
    {
        printf("The day is invalid\n");
    }
    return 0;
}