#include<stdio.h>

int main(){
    //int ar[5]= {10,-3,-8,20,300};
    int ar[]= {10,-3,-8,20,300};  //or
   // int ar[5]= {10,-3,-8,20,300,70}; //ERROR: warning:excess elements in array initializer
   // int ar[5]= {10,-3,-8};// 3ta value thikmoto hobe , bakigula 0
    //int ar[5]= {1000};    // 1ta value thikmoto hobe , bakigula 0
    // int ar[5]= {0};       // ALL VALUE IS 0

    for(int i=0; i<5; i++){
        printf("%d\n",ar[i]);
    }
    printf("\n %d",ar[5]);
}