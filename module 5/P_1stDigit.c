// 999< x <= 9999  , that means 'x' is always 4 digit
// If the first digit is even print "EVEN" otherwise print "ODD".

#include<stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    
    int res= x/1000 ;
    if(res%2 ==0){
        printf("EVEN\n");
    }
    else{
        printf("ODD\n");
    }
    
    return 0 ;
}