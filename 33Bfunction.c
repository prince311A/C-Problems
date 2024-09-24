#include<stdio.h>
#include<conio.h>
int fact(int x);
int fact(int x)
{
    int i,f;
    f = 1;
    for(i=x;i>=1;i--){
        f = f*i;
    }
    return(f);
    }
    void main(){
     int n,s;
     printf("Enter the number\n");
     scanf("%d",&s);
     n = fact(s);
     printf("The factorial of number is %d",n);
     getch();   
    
    }