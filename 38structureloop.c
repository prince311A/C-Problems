#include<stdio.h>

struct student
    {
        int rl;
        char name[15];
        float per;
    };

int main()
{
    struct student p[6];
    int i;
    for(i=0;i<6;i++){
        printf("Enter the name,roll no and percent of student %d\n",i+1);
        gets(p[i].name);
        fflush(stdin);
        scanf("%d",&p[i].rl);
         fflush(stdin);
        scanf("%f",&p[i].per);
         fflush(stdin);
    }
    printf("NAME          ROLL NO      PERCENTAGE\n\n");
    printf("*******************************************\n");
    
    for(i=0;i<6;i++){
        printf("%s         %d          %f\n",p[i].name,p[i].rl,p[i].per);
    }
    
    return 0;
}