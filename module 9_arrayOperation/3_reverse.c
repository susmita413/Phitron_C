// Reverse array element, DON'T USE NEW ARRAY
// TWO POINTER TECHNIQUE

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int ar[n];     
    for(int i=0; i<n; i++ ){    // ARRAY element nilam //
        scanf("%d",&ar[i]);
    }

    int i =0, j= n-1 ;
    while(i<j){
         int tmp = ar[i];  //SWAP 
         ar[i]= ar[j];
         ar[j]= tmp ;
         i++ , j-- ;
    }

    for(int i=0; i<n; i++){      
        printf("%d ",ar[i]);
    }

    return 0 ;
}