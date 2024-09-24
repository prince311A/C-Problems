#include<stdio.h>

void display(int a[3][2]){
    int i,j;
for(i=0;i<3;i++){
    for(j=0;j<2;j++){
    printf("  %d",a[i][j]);
}
printf("\n");
}
}

int main()
{
    int i,j,f[3][2];
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
        printf("Enter the value %d\n",i+1);
        scanf("%d",&f[i][j]);
    }
    }
     display(f);
    
    return 0;
}