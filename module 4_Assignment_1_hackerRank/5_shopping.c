#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long long int tk;
    scanf("%lld",&tk);
    
    if(tk>1000){
        printf("I will buy Punjabi\n");
        long long int cur_tk= tk-1000 ;
        
        if(cur_tk >=500){
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }
    
    else{
       printf("Bad luck!\n"); 
    }
    return 0;
}
