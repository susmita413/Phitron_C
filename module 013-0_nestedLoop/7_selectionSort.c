// SELECTION SORT
// ASCENDING ORDER

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i<n; i++){    // ARRAY INPUT
        scanf("%d",&ar[i]);
    }
                                  // ASCENDING
    for(int i=0; i<=n-2; i++){    // i= selected value from left side
        for(int j=i+1; j<n; j++){
            if(ar[i]>ar[j]){   // left side will be small, IF LARGE--THEN SWAP
                int temp = ar[i];
                ar[i]= ar[j];
                ar[j]= temp;
            }
        } 
    }

    //                               // DESCENDING
    // for(int i=0; i<=n-2; i++){    // i= selected value from left side
    //     for(int j=i+1; j<n; j++){
    //         if(ar[i]<ar[j]){   // left side will be LARGE,IF SMALL--THEN SWAP
    //             int temp = ar[i];
    //             ar[i]= ar[j];
    //             ar[j]= temp;
    //         }
    //     } 
    // }
    
    printf("SORTED ARRAY :\n") ;  // NEW SORTED ARRAY OUTPUT
    for(int i=0; i<n; i++){
        printf("%d ",ar[i]);
    }
    
    return 0;
}

/*
 ARRAY :
10
4 5 1 60 -4 0 5 60 5 3  
SORTED ARRAY :
-4 0 1 3 4 5 5 5 60 60

// DESCENDING 
10
4 5 1 60 -4 0 5 60 5 3
SORTED ARRAY :
60 60 5 5 5 4 3 1 0 -4

*/