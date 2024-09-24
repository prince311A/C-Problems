#include<stdio.h>

int main()
{
    int r,c;
    for(r=1;r<=9;r++){
      for(c=r;c<=9;c++){
        printf(" ");
      }
        for(c=1;c<=r;c++){
          printf(" %d",c); 
         // printf("*"); 
        }
        printf("\n");
    }
    return 0;
}