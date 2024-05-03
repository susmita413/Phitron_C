#include<stdio.h>
#include<string.h>

int main(){
    int n,s,k=1;   // s= space print/number , k= * print/number
                   // n= line number
    scanf("%d",&n);
    s=n-1 ;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=s; j++){  // space print
            printf(" ");
        }
        for(int j=1; j<=k; j++){  // * print
            printf("*");
        }                         // 1 ta line shesh
        s-- ;
        k+=2 ;
        printf("\n");
    }

    return 0;
}

/*/ pattern : n=5

    *
   ***
  *****
 *******
*********

/*/