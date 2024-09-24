#include<stdio.h>

int main()
{
    char s[50];
    float sal;
    printf("Enter the employee name amd salary\n");
    gets(s);
    fflush(stdin);
    scanf("%f",&sal);
    fflush(stdin);
    FILE *ptr;
    ptr = fopen("filetextA.txt","w");
    fprintf(ptr,"%s, %f",s,sal);
    fclose(ptr);
    
    return 0;
}