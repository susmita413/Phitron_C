#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long long int a,b;  // INPUT = -10^9 <= A,B <= 10^9
    
    scanf("%lld%lld",&a,&b) ;
    long long int mult = a*b ;

    printf("%lld",mult) ;

    return 0;
}