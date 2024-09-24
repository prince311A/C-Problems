#include<stdio.h>

int main()
{    
    FILE *ptr;
    char s[50];
    ptr = fopen("filetext.txt","w");
    fprintf(ptr,"MY NAME IS PRINCE TIWARI");
    printf("Enter what you want in the file\n");
    gets(s);
    fprintf(ptr,"\n%s",s);
    fclose(ptr);
    return 0;
}