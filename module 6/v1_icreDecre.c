// Increment Decrement

#include<stdio.h>

int main(){
    int i =10;
    //i++ ;   //i=11
   // ++i ;   //i=11
    //i-- ;      // i=9
    // --i ;     // i=9

   // int x= i++ ;      // x= 10 , i= 11 
   // int x= ++i ;      // i=11 , x= 11
   // int x= i-- ;        // x=10, i=9
    int x= --i ;        // i=9 , x =9

    printf("x= %d , i= %d \n",x,i);
    return 0 ;
}