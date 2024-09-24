#include<stdio.h>

int main()
{
    int a,b,c,d;
    printf("Enter the four no.\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b){
        if(a>c){
            if(a>d){
                printf("%d is the greatest value\n",a);
            }
            else{
                printf("%d is the greatest value\n",d);
            }
        }
        else{
            if(c<d){
                printf("%d is the greatest value\n",d);
            }
            else{
                printf("%d is the greatest value\n",c);
            }
        }
    }
        else{
    
            if(b<c){
                if(c<d){
                    printf("%d is the greatest value\n",d);
                }
                else{
                    printf("%d is the greatest value\n",c);
                }
                
            }
            else{
                if(b<d){
                    printf("%d is the greatest value\n",d);
                }
                else{
                    printf("%d is the greatest value\n",b);
                }
            }
        }

        
    return 0;
}