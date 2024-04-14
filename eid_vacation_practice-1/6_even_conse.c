//Print the 5 consecutive even numbers whose summation is N.

#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    
    int a= (N-20)/5 ;
    printf("%d %d %d %d %d\n",a,a+2,a+4, a+6, a+8) ;

    return 0 ;
}