#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d",&n);
    int k=n ;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=k; j++){
            printf("%d ",j);
        }
        k-- ;
        printf("\n");
    }

    return 0;
}

/*/ pattern : n=5

1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1 

/*/