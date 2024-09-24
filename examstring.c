#include<stdio.h>
struct printname{
    char n[25];
};

int main()
{
   struct printname p[10];
    int i;
    
    for(i=0;i<10;i++){
        printf("Enter the name\n");
        gets(p[i].n);
        fflush(stdin);
    }
    for(i=0;i<10;i++){
        printf("%s\n",p[i].n);
    }
    return 0;
}