#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int num ;
    int count_odd=0, count_even=0, count_pos=0, count_neg=0 ;


    for(int i=1; i<=n; i++){
        scanf("%d",&num);
        if(num%2 ==1 || num%2 ==-1) count_odd++ ;
        else count_even++ ;

        if(num>0) count_pos++ ;
        else if(num<0) count_neg++ ;
    }

    printf("Even: %d\n",count_even);
    printf("Odd: %d\n",count_odd);
    printf("Positive: %d\n",count_pos);
    printf("Negative: %d\n",count_neg);
    return 0 ;
}