#include<stdio.h>

int main(){
    char a[7] = "Susmita" ;  // SIZE=7, but we didnot give blank index for '\0' , SO, GARBAGE SHOW IN LAST
    printf("%s",a);
    printf("\nSIZE of String a : %d\n", sizeof(a)/sizeof(char));

    printf("\n");
    char aa[8] = "Susmita" ;  // SIZE=8, giving blank index for '\0' 
    printf("%s",aa);
    printf("\nSIZE of String aa : %d\n", sizeof(aa)/sizeof(char));

    printf("\n");
    char B[8] = "Susmita\0" ;  // SIZE=8, strictly set '\0' by me
    printf("%s",B);
    printf("\nSIZE of String B : %d\n", sizeof(B)/sizeof(char));

    printf("\n");
    char Bb[] = "Susmita\0" ;  // SIZE=9, give '\0' by me and then computer will also set '\0' by itself
    printf("%s",Bb);
    printf("\nSIZE of String Bb : %d\n", sizeof(Bb)/sizeof(char));

    
    // 2nd use case is best//
    
    return 0 ;
}