#include <stdio.h>

int main()
{
    int i,j,c;
    c=0;
    // prime = 1;
    // printf("Enter the number to check prime\n");
    // scanf("%d",&n);

     for(j= 1; j <= 100; j++)
    {
        for (i = 2; i < j; i++)
        {

            if (j % i == 0)
            {
                c++;
                break;
            }
        }
            if (c == 0 && j!=1)
            
                printf("%d\n", j);
                c=0;
            
    }
    return 0;
}