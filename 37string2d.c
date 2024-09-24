#include<stdio.h>

int main()
{
    char a[2][2];
    int i,c;
    for(i=0;i<2;i++){
        for(c=0;c<2;c++){
        printf("Enter the players name\n");
        gets(a[i][c]);
    }
    }
    for(i=0;i<2;i++){
        for(c=0;c<2;c++){
        printf("The players name is %s\n",a[i][c]);
    }
    }
    


    return 0;
}