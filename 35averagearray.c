#include<stdio.h>

int main()
{
   // int a[10];
    float a[10],sum = 0,avg;
    //sum = 0;
    int i;
   // printf("Enter the ten numbers\n");
    for(i=0;i<=9;i++){
         printf("Enter the fifty numbers %d\n",i);
        scanf("%f",&a[i]);
        sum = sum+a[i];
    }
    printf("The sum is %.3f\n",sum);
       avg = sum/10;
    
    avg = (float)sum/10;
    printf("The average of ten number is %f\n",avg);
    return 0;
}