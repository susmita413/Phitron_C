#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n); // INPUT: 0 <= N <= 10^9
    
    if(n%3 == 0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
