// COUNTING ARRAY / FREQUENCY ARRAY // ** INTEGER
// count value 0 to 6 from an ARRAY
// MAIN ARRAY's values start from 0, end with 6.

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }

    int cnt[7]={0} ;
    for(int i=0; i<n; i++){
       int val= ar[i];
       cnt[val]= cnt[val]+1 ; // cnt[val]++
    }

    for(int i=0; i<7; i++){
        printf(" %d = %d times\n",i, cnt[i]);
    }

    return 0 ;
}