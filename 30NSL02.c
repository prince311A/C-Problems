#include<stdio.h>

int main()
{
    int r,c;
    for(r=9;r>=1;r--){
       for(c=1;c<=r;c++){
      //  for(c=r;c>=1;c--){
             printf("%d",c);
            //printf("*");
            
        }
        printf("\n");
    }
    return 0;
}