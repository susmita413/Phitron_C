// Make a simple program that reads one variables named N which is must a 4 digit number.
// Your task is to print the number in reverse order.

#include<stdio.h>

int main(){
    int N ;
    scanf("%d",&N);

    int i=1000, div=N, R_num=0 ;
    int mod;

    while(div != 0 && i>0){
        mod= div%10 ;
        div= div/10 ;
        R_num = R_num + (mod*i) ;
        i= i/10 ;
    }
    printf("%d",R_num);
    
    return 0 ;
}