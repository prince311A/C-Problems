#include<stdio.h>

int main()
{
    int num;
    printf("Enter the number between 1-12 to print months\n");
    scanf("%d",&num);
    if(num == 1){
        printf("The month is JANUARY\n");
    }
    else if(num == 2){
        printf("The month is FEBRUARY\n");
    }
    else if(num == 3){
        printf("The month is MARCH\n");
    }
    else if(num == 4){
        printf("The month is APRIL\n");
    }
    else if(num == 5){
        printf("The month is MAY\n");
    }
    else if(num == 6){
        printf("The month is JUNE\n");
    }
    else if(num == 7){
        printf("The month is JULY\n");
    }
    else if(num == 8){
        printf("The month is AUGUST\n");
    }
    else if(num == 9){
        printf("The month is SEPTEMBER\n");
    }
    else if(num == 10){
        printf("The month is OCTOBER\n");
    }
    else if(num == 11){
        printf("The month is NOVEMBER\n");
    }
    else if(num == 12){
        printf("The month is DECEMBER\n");
    }
    else{
        printf("Wrong key pressed\n");
    }
    return 0;
}