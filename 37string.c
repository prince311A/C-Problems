#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    // char a[4] = {'M','C','A'};
    // char b[3] = {'a','p','s'};
    char r[20];
    char b[30];
    printf("Enter the string\n");
    scanf("%s",r);
    fflush(stdin);
    printf("Enter the second string\n");
    gets(b);

    printf("The string is %s\n", r);
    printf("The SECOND string is %s\n", b);

    printf("The length of a is %d\n", strlen(r));
    printf("The reverse of a is %s\n", strrev(r));
    printf("Lower case is %s\n", strlwr(r));
    printf("The reverse of a is %s\n", strrev(r));
    printf("The string is %s\n", r);
    printf("The length of b is %d\n", strlen(b));
    printf("The copy of string b on r is %s\n", strcpy(r, b));
    printf("The string is %s\n", r);
    printf("The addition of string r and b is %s\n", strcat(r, b));

    return 0;
}