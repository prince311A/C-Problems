// #include<stdio.h>
// #include<conio.h>
// void  fact(int x);
// void fact(int x){
//     int i;
//     int f =1;
//     for(i=x;i>=1;i--){
//         f = f*i;
//     }
//     printf("The value of factorial is %d\n",f);
//     // return(fact);
//     }
// void main(){
//     int n;
//     int a = 5;
//  fact(a);
// // printf("The value of %d factorial is %d",a,n);
//     getch();
// }
// *******************************************************************************************
// #include<stdio.h>
// void table(int x);
// void table(int x){
//     for(int i=1;i<=10;i++){
//         printf("%d X %d = %d",x,i,x*i);
//         printf("\n");
//     }
//   //  return(table);
// }
// int main()
// {
// int a = 2;
//  table(2);
    
//     return 0;
// }
// ************************************************************************************************
// #include<stdio.h>
// int main()
// {
//      int a,*p,**q;
//      p = &a;
//      q = &p;
//      a = 65;
//      printf("%d",p);
//      printf("\n%d",&a);
//      printf("\n%d",a);
//      printf("\n%d",*p);
//      printf("\n%d",&p);
//      printf("\n%d",q);
//      printf("\n%d",**q);
//     return 0;
// }
// ************************************************************************************************
// #include<stdio.h>
// void fun1(int *p,int *q);
// void fun1(int *p,int *q){
//     int temp;
//     temp = *p;
//     *p = *q;
//     *q = temp;

// }
// int main()
// {
//     int a,b;
//     a = 10;
//     b = 20;
//     fun1(&a,&b);
//     printf("The value of a is %d\n",a);
//     printf("The value of b is %d\n",b);
    
//     return 0;
// }
// **********************************************************************************************
// #include<stdio.h>
// // #include<string>
// struct student{
//     int roll;
//     char name[25];
//     float percent;
// };
// int main()
// {
//    struct student p[2];
//    for(int i=0;i<=1;i++){
//     printf("Enter the roll no\n");
//     scanf("%d",&p[i].roll);
//     printf("Enter the name\n");
//     fflush(stdin);
//     gets(p[i].name);
//     fflush(stdin);
//     printf("Enter the percent\n");
//     scanf("%f",&p[i].percent);
//    }
//    for(int i=0;i<=1;i++){
//    printf("DETAILS of Student %d::::::\n",i+1);
//     printf("Roll no is %d\n",p[i].roll);
//     printf("Name is %s\n",p[i].name);
//     printf("Percent is %0.3f\n",p[i].percent);
//    }
//  return 0;
// }
// *******************************************************************************************
// #include<stdio.h>
// int main()
// {
//     FILE *ptr;
//     ptr= fopen("abc.txt","w");
//     fprintf(ptr,"MY NAME IS PRINCE TIWARI");
//     fclose(ptr);
//      ptr= fopen("abc.txt","r");
//      char c;
//      c = getc(ptr);
//      while (c!=EOF)
//      {
//         printf("%c",c);
//        c= getc(ptr);
//      }
//      fclose(ptr);
//      char name[150];
//      printf("\nEnter anything you want to add to file\n");
//      gets(name);
//      ptr = fopen("abc.txt","w");
//      fprintf(ptr,"%s",name);
//     return 0;
// }
// ***********************************************************************************************
// #include<stdio.h>
// int a=150;
// int b=20;
// int main()
// {
//     int a = 5;
//     printf("a = %d",a);
//     {
//     extern int a;
//     extern int b;
//     printf("\na = %d",a);
//     printf("\nb = %d",b);
//     }
//     return 0;
// }
// *************************************************************************************************
// #include<stdio.h>
// int main()
// {
//     int mat1[3][3];
//     int mat2[3][3];
//     int finalmat[3][3];
//     printf("Enter the matrix one\n");
//     for(int r=0;r<=2;r++){
//         for(int c=0;c<=2;c++){
//             scanf("%d",&mat1[r][c]);
//         }
//     }
//      printf("Enter the matrix two\n");
//     for(int r=0;r<=2;r++){
//         for(int c=0;c<=2;c++){
//             scanf("%d",&mat2[r][c]);
//         }
//     }
//     printf("Matrix One is:::::\n");
//         for(int r=0;r<=2;r++){
//         for(int c=0;c<=2;c++){
//             printf(" %d",mat1[r][c]);
//         }
//         printf("\n");
//     }
//     printf("Matrix Two is:::::\n");
//         for(int r=0;r<=2;r++){
//         for(int c=0;c<=2;c++){
//             printf(" %d",mat2[r][c]);
//         }
//         printf("\n");
//     }
//     for(int r=0;r<=2;r++){
//         for(int c=0;c<=2;c++){
//     finalmat[r][c]= mat1[r][c]*mat2[r][c];
//         }
//         printf("\n");
//     }
//      printf("Final Matrix is:::::\n");
//         for(int r=0;r<=2;r++){
//         for(int c=0;c<=2;c++){
//             printf(" %d",finalmat[r][c]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// *******************************************************************************************
#include<stdio.h>
#include<string.h>
int main()
{
char a[7];
char b[7];
printf("Enter 1st string\n");
scanf("%s",&a);
printf("Enter 2nd string\n");
scanf("%s",&b);
printf("The comparision of strings is %d",strcmp(a,b));  
    
    return 0;
}
// ***************************************************************************************************
