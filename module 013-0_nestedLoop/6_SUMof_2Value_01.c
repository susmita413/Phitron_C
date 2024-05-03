// user input X
// find two values from array, whose sum is equal to X
// 

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i<n; i++){    // ARRAY INPUT
        scanf("%d",&ar[i]);
    }
    printf("Enter x : ");
    int x;
    int flag =0 ;
    scanf("%d",&x);

    for(int i=0; i<=n-2; i++){
        for(int j=i+1; j<n; j++){
            if(ar[i]+ ar[j] ==x){
                 flag =1 ;break ;
            }
        } 
    }

    if(flag ==0) printf("NO");
    else printf("YES");

    return 0;
}

/*
 ARRAY :
 5  
6 7 8 1 5
Enter x : 40  | 13 |
          NO  | YES|
*/