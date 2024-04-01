#include<stdio.h>

int main(){
    int a,b ;

    scanf("%d%d",&a, &b) ;
    a+b ;     // not storing value anywhere//
    
    int sum = a+b ; // storimg value in "sum" //
    printf("SUM= %d\n", sum);


    float calc = b*a/2.34 ;
    printf("CALCULATION= %f\n", calc);

    float mod= 8%20 ;
    printf("MOD = %f",mod) ;
    return 0;
}