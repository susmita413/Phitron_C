// user input X
// find two values from array, whose sum is equal to X
// 

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }
    printf("Enter x : ");
    int x;
    scanf("%d",&x);
    for(int i=0; i<=n-2; i++){
        for(int j=i+1; j<n; j++){
            printf("%d %d\n", ar[i], ar[j]);
        }
        printf("\n");
    }

    return 0;
}

/*
 ARRAY :
 6
 1 4 6 6 10 9
*/