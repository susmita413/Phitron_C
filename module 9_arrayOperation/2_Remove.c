// Remove element fron GIVEN POSITION 

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int ar[n];     
    for(int i=0; i<n; i++ ){  // ARRAY element nilam //
        scanf("%d",&ar[i]);
    }

    int pos ;                // Remove element fron this POSITION //
    printf("ENTER POSITION: ");
    scanf("%d",&pos) ;

    for(int i=pos; i<n-1; i++){  // Remove Element and other elements is moved to LEFT one by one 
        ar[i] = ar[i+1];
    }
                           

    for(int i=0; i<n; i++){      
        printf("%d ",ar[i]);
    }


    return 0 ;
}