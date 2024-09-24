#include<stdio.h>

 struct student
    {
        int rl;
        char name[15];
        float per;
    };

int main()
{
    struct student p;
    printf("space of p is %d\n",sizeof(p));
    printf("Enter the name, roll number and percent of stundent\n");
   // scanf("%d",&p.rl);
  //  scanf("%f",&p.per);
    gets(p.name);
 scanf("%d",&p.rl);
  scanf("%f",&p.per);
    printf("STUDENT ROLL NO. is %d\nSTUDENT PERCENT is %f\n",p.rl,p.per);
    printf("STUDENT NAME IS %s",p.name);


    return 0;
}