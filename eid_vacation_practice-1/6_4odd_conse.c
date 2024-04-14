// Print the 4 consecutive odd numbers whose summation is N.

#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    
    int a= (N-12)/4 ;
    printf("%d %d %d %d\n",a,a+2,a+4, a+6) ;

    return 0 ;
}