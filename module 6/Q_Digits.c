#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
   
    for(int i=1; i<=t ;i++){
         int num, mod;
        scanf("%d",&num);
        
        do{
            mod = num%10 ;
            num = num/10 ;
            printf("%d ",mod); 
        }
        while(num != 0);
        printf("\n");
    }
    return 0 ;
}