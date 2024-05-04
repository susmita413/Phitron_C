#include<stdio.h>

 int main(){
    double x= 5.26 ;
    double *ptr = &x ;
    double *ptr2 = ptr ;

    printf(" x= %0.2lf\n",x);    // value of x
    printf(" x= %0.2lf\n",*ptr);  // dereference // pointer diye x ke access kora
    printf(" x= %0.2lf\n",*ptr2); 
    
    *ptr2 = 10.4567 ;

    printf("NOW, x= %0.3lf\n",x);    // value of x
    printf("NOW, x= %0.3lf\n",*ptr);  // dereference // pointer diye x ke access kora
    printf("NOW, x= %0.3lf\n",*ptr2); 

     printf("address of x = %p\n",&x);                 
    printf("address of ptr= %p\n",&ptr);  
    printf("address of ptr2 = %p\n",&ptr2);    
 }