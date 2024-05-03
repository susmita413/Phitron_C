// basic
 #include<stdio.h>

 int main(){
    int x= 10;
    int *p = &x ; // x er address p pointer e rakha holo 

    printf("%p\n",&x);   //address of x 
    printf("%p\n",p);    //address of x 

    printf(" x= %d\n",x);    // value of x
    printf(" x= %d\n",*p);  // dereference // pointer diye x ke access kora

    *p = 560 ;              // dereference 
    printf("NOW, x= %d\n",x);

    
 }