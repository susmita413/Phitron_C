// character array
// input output is like to normal array

#include<stdio.h>

int main(){
    int n= 5;
    char a[n];
    for(int i=0; i<n; i++){
        scanf("%c",&a[i]);   //susmi
    }

    for(int i=0; i<n; i++){
        printf("%c\n",a[i]); 
    }                             
 /* 
    s
    u
    s
    m
    i
 */

    return 0 ;
}