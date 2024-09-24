// #include<stdio.h>
// int fact(int x);
// int fact(int x){
//     int mul=1;
//     for(int i =x;i>=1;i--){
//         mul = mul*i;
//     }
//     printf("the %d\n",mul);
//     // return(mul);
// }
// int main()
// {
//     int n;
//     n = fact(5);
//     // printf("The value of fact is %d\n",n);
//     return 0;
// }
// *******************************************************************************************
// #include<stdio.h>
// int main()
// {
//  int x=5; 
//  int a =1;
//  table :
//  printf("%d x %d = %d\n",x,a,x*a);
//  a++;
//  if(a<=10)goto table;  
//     return 0;
// }
// **********************************************************************************************
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[10] = {"prince"};
//     char b[10] = {"shivam"};
//     printf("%s\n",strupr(a));
//      printf("%s\n",strupr(b));
//       printf("%s\n",strlwr(a));
//        printf("%d\n",strlen(a));
//         printf("%s\n",strcpy(a,b));
//          printf("%s\n",strcat(b,a));
//           printf("%d\n",strcmp(b,a));
//     return 0;
//}
// *************************************************************************************************
// #include<stdio.h>
// int main()
// {
//    FILE *ptr;
//    ptr = fopen("abc.txt","w");
//    fprintf(ptr,"My name is prince tiwari\n");
//     char s[50];
// gets(s); 
// fprintf(ptr,"%s",s);
//    fclose(ptr);
//     return 0;
// }
// *************************************************************************************************
// #include<stdio.h>

// int main()
// {
//  int m,n,*p,*q;
//  p = &m;
//  q = &n;
//  m = 10;
//  n = 20;
//  if(*p>*q){
//     printf("The greatest number is %d",*p);
//  }
//  else{
//       printf("The greatest number is %d",*q);
//  }
//     return 0;
// }
// *************************************************************************************
// #include<stdio.h>
// int main()
// {
//     for(int i=1;i<=100;i++){
//         if(i%2==1){
//             printf("%d\n",i);
//         }
//     }
//     return 0;
// }
// *********************************************************************************

