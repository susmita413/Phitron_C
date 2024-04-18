#include<stdio.h>
#include<limits.h>

int main(){
    int n;
    scanf("%d",&n);
    int a, max=0 ;
    // int min= INT_MAX;
    // int max = INT_MIN ;
    for(int i=1; i<=n; i++){
        scanf("%d",&a);
        if(max<=a){
            max= a ;
        }
    }
    printf("%d",max);
    return 0 ;
}