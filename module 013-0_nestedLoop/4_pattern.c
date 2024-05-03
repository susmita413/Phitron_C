// diamond pattern 

#include<stdio.h>
#include<string.h>

int main(){
    int n;         // n= LINE without copy , Actual pattern = 2*n-1 LINE
    scanf("%d",&n);
    int s=n-1, k=1  ;
    for(int i=1; i<=(2*n-1); i++){
        for(int j=1; j<=s; j++){    // in a Line
            printf(" ");
        }
        for(int j=1; j<=k; j++){    // in a Line
            printf("*");
        }
        
        if(i<=n-1){                 // AFTER PRINTING 1 LINE 
            s-- ; k+=2 ;
        }
        else{
            s++ ; k-=2 ;
        }
        
        printf("\n");
    }

    return 0;
}

/*/ pattern :
 n=5
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

/*/