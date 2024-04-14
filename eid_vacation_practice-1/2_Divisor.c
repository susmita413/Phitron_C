//In a division problem, the dividend is D, the quotient is Q and the remainder is R. What is the divisor?
// Example:
// if D = 16, Q = 5 and R = 1 then, Divisor is 3


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int D, Q, R;
    scanf("%d%d%d",&D,&Q,&R);
    int num = D/Q ;
    
    if(D-(num*Q) != R){
        num= num-1 ;
    }

    printf("%d",num);
    return 0;
}
