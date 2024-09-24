#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main(){
int i,sec,min;
sec =0;
min =0;
for(i =0;i<400;i++){
clrscr();
if(sec<60){
sec = sec +1;
}
if(sec>=60){
sec =0;
min = min +1;
}
printf("%d  %d",min,sec);
delay(1000);
}
getch();
}
