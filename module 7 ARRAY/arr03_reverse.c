#include<stdio.h>

int main(){
    int n;     // ARRAY SIZE
    scanf("%d",&n); 
   // int ar[n] = {5,6,7,8} ; // variable "ar" may not be initialized C/C++(145)

    int ar[n];

    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }
                                // REVERSE PRINT
    for(int i=n-1; i>=0; i--){
        printf(" %d ",ar[i]);
    }
    
}