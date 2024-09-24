#include<stdio.h>
#include<string.h>
int main (void)
{
char *phrase = "Happy New Year!";
int count = 0;
for (int i = 0, n = strlen(phrase); i < n; i++)
{
if
(phrase [i]>= 'A' && phrase[i] <= 'Z'){
count++;
}
}
printf("%i\n", count);
}