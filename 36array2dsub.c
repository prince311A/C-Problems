#include<stdio.h>

int main()
{
    int r,c,mat1[3][3],mat2[3][3],finalmat[3][3];
    printf("Enter the first matrix\n");
    for(r=0;r<=2;r++){
        for(c=0;c<=2;c++){
            scanf("%d",&mat1[r][c]);
        }
    }
    for(r=0;r<=2;r++){
        for(c=0;c<=2;c++){
    printf("  %d",mat1[r][c]);
        }
       printf("\n"); 
    }

    printf("Enter the second matrix\n");
    for(r=0;r<=2;r++){
        for(c=0;c<=2;c++){
            scanf("%d",&mat2[r][c]);
        }
    }
    for(r=0;r<=2;r++){
        for(c=0;c<=2;c++){
    printf("  %d",mat2[r][c]);
        }
       printf("\n"); 
    }
    
     printf("The addiction of two matrix :\n");
     for(r=0;r<=2;r++){
        for(c=0;c<=2;c++){
            finalmat[r][c] = mat1[r][c] - mat2[r][c];
        }
     }
     for(r=0;r<=2;r++){
        for(c=0;c<=2;c++){
            printf("  %d",finalmat[r][c]);
        }
        printf("\n");
     }
        
    return 0;
}