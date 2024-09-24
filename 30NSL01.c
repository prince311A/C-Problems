#include<stdio.h>

int main()
{
    int r,c;
    // for(r=9;r>=1;r--){
      //   for(c=9;c>=r;c--){
        for(r=1;r<=9;r++){
            for(c=1;c<=r;c++){
           printf("%d",c);
            // printf("*");
            
        }
        printf("\n");
    }
    return 0;
}