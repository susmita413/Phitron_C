// What happens if you try to access an array element that is out of range in C programming?

#include<stdio.h>

int main(){
    int ar[2];
    ar[0]= 100;
    ar[1]= 200 ;
    ar[2] = 500 ;
    ar[3] = 600 ;
    printf("%d %d %d %d", ar[0], ar[1],ar[2], ar[3]); // why code runs perfectly?

    return 0 ;
}
/*
  Just because the code runs doesn't mean it's correct or safe. It could behave differently on another machine,
  with different compiler optimizations, or in different execution conditions. Out-of-bounds access can cause
   hard-to-debug issues, data corruption, security vulnerabilities, or crashes in real-world applications.
*/