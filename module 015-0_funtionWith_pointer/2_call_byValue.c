// call by value

#include<stdio.h>

void fun(int x){
    x= 200 ;
    printf("fun er 'x' er ADDRESS = %p\n",&x);
}

int main(){
    int x = 15 ;
    fun(x);
    printf("main er 'x' er ADDRESS = %p\n",&x);
    printf("main e 'x' = %d\n",x);
    
    

    return 0 ;
}