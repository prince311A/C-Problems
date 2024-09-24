#include<stdio.h>
#include<conio.h>
void main(){
    int x,*p,**q;
    x = 699;
    p = &x;
   // *p = *p+5;
  //  x = x+4;
    q = &p;
    printf("%d\n",p);//address of x
    printf("%d\n",*p);// value of x
    printf("%d\n",&x);//address of x
    printf("%d\n",x);// value of x
    printf("%d\n",q);// address of p
    printf("%d\n", *q);// value of p that is address of x
   printf("C%d\n",**q); // value of x
   getch();
}