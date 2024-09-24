#include<stdio.h>

int main()
{
    int a;
    short int b;
    long int c;
    float d;
    double e;
    long double f;
    char g;
    long long h;

// scanf("%d%d%ld%f%lf%LF%c",&a,&b,&c,&d,&e,&f,&g);
// printf("%d %d %ld %f %lf %Lf %c\n",a,b,c,d,e,f,g);
printf("%d\n",sizeof(a));
printf("%d\n",sizeof(b));
printf("%ld\n",sizeof(c));
printf("%d\n",sizeof(d));
printf("%d\n",sizeof(e));
printf("%d\n",sizeof(f));
printf("%d\n",sizeof(g));
printf("%d\n",sizeof(h));


    return 0;
}