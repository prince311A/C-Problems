#include<stdio.h>

int main()
{
    int r,c;
    for(r=65;r<=75;r++){
        for(c=65;c<=r;c++){
            printf("%c",c);
        }
        printf("\n");
    }

    //ultaa
    // for(r=75;r>=65;r--){
    //     for(c=r;c>=65;c--){
    //         printf("%c",c);
    //     }
    //     printf("\n");
    // }
    return 0;
}