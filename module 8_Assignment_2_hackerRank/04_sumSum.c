// https://www.hackerrank.com/contests/assignment-02-a-introduction-to-c-programming-a-batch-05/challenges/sum-sum-2
// You will be given a positive integer N and N numbers after that. 
// You need to tell the sum of positive numbers and the sum of negative numbers separated by a space.

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int ar[n];

    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }
    
    int sum_pos=0, sum_neg=0 ;
    for(int i=0; i<n; i++){
        if(ar[i]>=0){
           sum_pos= sum_pos + ar[i] ;
        }
        else{
            sum_neg = sum_neg + ar[i];
        }
    }
    printf("%d %d", sum_pos, sum_neg);
    return 0 ;
}