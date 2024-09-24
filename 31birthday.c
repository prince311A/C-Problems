#include<stdio.h>

int main()
{
    int bd,bm,by;
    int cd = 2,cm = 10,cy = 2022;
    printf("Enter the date of birth\n");
    scanf("%d%d%d",&bd,&bm,&by);
    int date,month,year;
    if(bm>=cm && bd>=cd){
        year = (cy-by)-1;
        month = 12-(bm-cm);
        date = 30-(bd-cd);
    }
    else if(cm>=bm && bd>=cd){
        year = cy-by;
        date = 30-(bd-cd);
        month =(cm-bm)-1;
    }
    else if(bm>=cm && cd>=bd){
        year = (cy-by)-1;
        date = cd-bd;
        month = 12-(bm-cm);
    }
    else if(cm>=bm && cd>=bd){
        year = cy-by;
        date = cd-bd;
        month = cm-bm;
    }
        
    
    printf("You are %dyears %d months %ddays old\n",year,month,date);

    
       return 0;
}