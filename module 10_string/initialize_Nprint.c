#include<stdio.h>

int main(){
    //char b[7]=  {'S','u','s','m','i','t','a'};
    char b[7] = "Susmita" ;

    //for(int i=0; i<7; i++){
    //    printf("%c\n",b[i]); 
    //} 

    printf("%s",b); // last e GARBAGE VALUE show kore

    printf("\n\n");

    //char a[8]= "SUSMITA\0" ; //  null character set by me // SIZE= 8
    char a[]= "SUSMITA\0" ;    //--OR // null character set by me, Computer also set a 'NULL CHARACTER' // SIZE = 9
    printf("%s",a);
    printf("\n SIZE of String a: %d\n", sizeof(a)/sizeof(char));

    // IF WE GIVE A BLANK ROOM/ INDEX FOR SETTING '\0' 1st char would PRINT PERFECTLY .

    printf("\n\n");

    char bb[8]= "Susmita" ;  
    printf("%s",bb);
    printf("\n SIZE of String bb : %d\n", sizeof(bb)/sizeof(char));
    return 0 ;
}