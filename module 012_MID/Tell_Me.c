// You will given an integer array A and the size N. You will also be given an integer value X. 
// You need to tell if X was appeared in the array.
// If X has appeared then print "YES", otherwise print "NO".

#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    int n;
    for(int i=1; i<=t ; i++){
        scanf("%d",&n);
        int ar[n];
        for(int j=0; j<n ; j++){
            scanf("%d",&ar[j]);
        }
        int x;
        scanf("%d",&x);
        int ans=0 ;
        for(int k=0; k<n; k++){
            if(ar[k] == x){
                ans= 1; break ;
            }
        }

        if(ans==1) 
            printf("YES\n");
        else 
            printf("NO\n");
    }
    return 0 ;
}