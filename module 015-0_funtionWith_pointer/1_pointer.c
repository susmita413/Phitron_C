#include<stdio.h>

 int main(){
    int x= 10;
    int *ptr = &x ; // x er address p pointer e rakha holo 

    printf("address of x = %p\n",&x);                 //address of x 
    printf("address of x / value of p = %p\n",ptr);   //address of x 
    printf("address of pointer = %p\n",&ptr);               //address of ptr 

    printf("\nMemory size of x= %d\n",sizeof(x)); 
    printf("Memory size of ptr= %d\n",sizeof(ptr)); 

    printf(" x= %d\n",x);    // value of x
    printf(" x= %d\n",*ptr);  // dereference // pointer diye x ke access kora
    printf(" pointer= %p\n",ptr); 

    *ptr = 560 ;              // dereference 
    printf("NOW, x= %d\n",x);

    
 }