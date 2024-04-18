#include<stdio.h>
#include<limits.h>

int main(){
    int n;
    scanf("%d",&n);
    int a ;
     int min= INT_MAX;
     int max = INT_MIN ;

    for(int i=1; i<=n; i++){
        scanf("%d",&a);
        if(max<=a) max= a ;

        if(min>=a) min =a ;
       
    }
    printf("MAX= %d, MIN= %d",max,min);
    return 0 ;
}