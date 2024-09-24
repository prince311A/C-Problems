#include<stdio.h>
#include<conio.h>
int tab(int x);
int tab(int x){
    int i;
    for(i=1;i<=10;i++){
        printf("%d x %d =%d\n",x,i,x*i);
    }
return(tab);
}
void main(){
    int a,z;
    printf("Enter the number for the table\n");
    scanf("%d",&a);
 z =   tab(a);
    getch();
    
}