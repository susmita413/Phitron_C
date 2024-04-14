#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int X, Y;
    scanf("%d%d",&X,&Y);
    
    int m,r ;
    r = (X-Y)/2 ;
    m = Y+r ;
    
    printf("%d %d",m,r);
    return 0;
}
