#include <stdio.h>
// #include <math.h>

int main() {
    int rewaPopulation = 250000;
    int satnaPopulation = 320000;
    double rewaGrowthRate = .07;
    double satnaGrowthRate = .06;
    int years = 0;

    while (rewaPopulation <= satnaPopulation) {
        rewaPopulation = rewaPopulation * (1+rewaGrowthRate);
        satnaPopulation = satnaPopulation * (1+ satnaGrowthRate);
        years++;
    }

    printf("It will take %d years for Rewa's population to surpass Satna's population.\n", years);

    return 0;
}
/*#include <stdio.h>
int main(void){
int  a[8] = {9, 4, 3, 5, 2, 9, 8, 6}; 
int l =0;
for (int i = 1; i < 8; i++){
if (a[i] > a[l]){
l = i;
}
}
int s1 = 0;
int i= 1;
if (a[0] == a[l]){
s1++;
i++;
}
for (; i < 8; i++) {
if (a[i] == a[1]){
continue;
}
if (a[i] > a[s1]){
s1 = i;
}
}
printf("%d\n", a[s1]);
return 0;
}*/
