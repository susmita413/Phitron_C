// Your task is to calculate the sum of all integers from 1 to n, inclusive.

#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    long long int  sum=0 ;    // N= 10^9 hole sum LARGE NUMBER hobe. //
    for(int i=1; i<=N; i++){
        sum = sum+i ;
    }
    printf("%lld",sum);

    return 0 ;
}