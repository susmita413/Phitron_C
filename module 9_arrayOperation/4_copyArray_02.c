// 2 array is given. 
// TASK is SERIALLY COPY elements from two arrays to a NEW ARRAY.
// Idea from Video


#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int ar1[n];     
    for(int i=0; i<n; i++ ){    // 1st ARRAY element nilam //
        scanf("%d",&ar1[i]);
    }

    int m;
    scanf("%d",&m);
    int ar2[m];     
    for(int i=0; i<m; i++ ){    // 2nd ARRAY element nilam //
        scanf("%d",&ar2[i]);
    }

    int ans[n+m];                // NEW ARRAY
    for(int i=0; i<n; i++){
        ans[i] = ar1[i];        // 1st array elements copy
    }
    
    int i= n ;                  // Now start copy from 2nd Array
    for(int k=0 ; k<m; k++){
        ans[i]= ar2[k];
        i++ ;
    }
      
    printf("NEW ARRAY : \n");
    for(int i=0; i<n+m; i++){      
        printf("%d ",ans[i]);
    }

    return 0 ;
}