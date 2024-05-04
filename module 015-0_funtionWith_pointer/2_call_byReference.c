// call by REFERENCE

#include<stdio.h>

void fun(int *p){

    *p= 200 ;
    printf("fun er 'p' er value = %p\n",p); // 0061FF1C
    // p =250 ; // assignment makes pointer from integer without a cast
   // printf("fun er 'p' er value = %d\n",p) ;
}

int main(){
    int x = 15 ;
    printf(" 'x' = %d\n",x);   //15
    printf("main er 'x' er ADDRESS = %p\n",&x); // 0061FF1C

    fun(&x);
    printf("Now, 'x' = %d\n",x);  // 200
    
    

    return 0 ;
}