// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M
// find min, max and swap them


#include<stdio.h>
#include<limits.h>

int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }
    int max= INT_MIN , min = INT_MAX ;
    int max_ind, min_ind ;

    for(int i=0; i<n ; i++){
        if(min>ar[i]){
            min= ar[i];
            min_ind =i ;
        }
        if(max< ar[i]){
            max = ar[i];
            max_ind =i ;
        }
    }
    ar[min_ind]= max ;
    ar[max_ind] = min ;

    for(int i=0; i<n; i++){
        printf("%d ",ar[i]);
    }


    return 0 ;
}