#include<stdio.h>

int main()
{
    float om,tm;
    float per;
    printf("Enter the obtained marks and total marks\n");
    scanf("%f%f",&om,&tm);
    per = (om*100)/tm;
    printf("The percentage is %f\n",per);
    per>40 ? printf("WOOHOOOO Student is pass") : printf("Student is fail");
    return 0;
}