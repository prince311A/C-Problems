#include<stdio.h>

int main()
{
    int n,a,prime;
    prime = 1;
    printf("Enter the number to check prime\n");
    scanf("%d",&n);
//     a = n-1;
//      do{
//          if(n%a == 0){
//      prime = 0;
//      break;
//      }
// a--;
//      }
//      while(a>=2);
//      if(prime ==0){
//          printf("It is not a prime number\n");
//      }
//      else{
//          printf("It is a prime number\n");
//      }

    for(a = n-1;a>2;a--){
        if(n%a==0){
            prime = 0;
            break;
        }
    }
    if(prime==0){
        printf("It is not a prime number\n");
    }
    else{
        printf("It is a prime number\n");
    }
//      a = n-1;
//     while(a>=2){
//         if(n%a == 0){
//             prime = 0;
//             break;
//         }
//         a--;
//     }
//  if(prime == 0){
//     printf("It is not a prime number\n");
//  }
//  else{
//     printf("It is a prime number\n");
//  }

    
    return 0;
}