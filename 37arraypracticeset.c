#include<stdio.h>
void positive(int s[15]){
    int pos = 0;
    for(int i=0;i<15;i++){
        if(s[i]<0){
            printf("The nagative numbers are %d\n",s[i]);
            pos++;
        }
    }
    printf("The negatives are %d\n",pos);
}


int main()
{
    int a[15],i;
    for(i=0;i<15;i++){
    printf("Enter the numbers %d\n",i+1);
    scanf("%d",&a[i]);
    }
    positive(a);
    
    return 0;
}