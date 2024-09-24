#include<stdio.h>

int main()
{
    int grade; 
    printf("Please enter the grade\n");
    scanf("%d", &grade);

    if( grade <= 100 && grade >= 90){
        printf("Student passed with A grade\n");
    }
    else if(grade <= 90 && grade >=80){
        printf("Student passed with B grade\n");
    }
    else if(grade <=80 && grade >=70){
        printf("Student passes with C grade\n");
    }
    else if(grade <=70 && grade >=60){
        printf("Student passed with D grade\n");
    }
    else if( grade < 70){
        printf("Student passed with F grade\n");
    }
    else{
        printf("INVALID INPUT\n");
    }
    return 0;
}