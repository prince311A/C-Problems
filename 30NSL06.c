#include<stdio.h>

int main()
{
    int r,c;
    for(r=1;r<=9;r++){
        {
            if(r == 9){
                printf("*****   *");
            }
        }
        {if(r == 6 || r == 7 || r == 8){
            printf("    *   *");
            }
        }
        if(r == 5){
            for(c=1;c<=9;c++){
                printf("*");
            }
        }
        if(r==2 || r==3 || r==4){
            for(c=1;c<=9;c++){
                if(c == 1 || c ==5){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }

        }
        if(r==1){
        for(c=1;c<=9;c++){
            if(c==1 || c==5 || c==6 || c==7 || c==8 || c==9){
                printf("*");
            }
            if(c==2 || c==3 || c==4){
                printf(" ");
            }
        }
        }
        printf("\n");
    }
    return 0;
}