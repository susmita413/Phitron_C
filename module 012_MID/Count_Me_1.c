
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }

    int divBy2=0, divBy3= 0 ;
    for(int i=0; i<n; i++){
        if(ar[i]%2==0 && ar[i]%3 ==0) 
            divBy2++ ;
        else if(ar[i]%2==0)
            divBy2++ ;
        else if(ar[i]%3 ==0)
            divBy3++ ;
    }
    printf("%d %d",divBy2, divBy3);
    
    return 0 ;
}