#include<stdio.h>

int main(){
    char a[8]; // for INPUT Length =7;
    //scanf("%s",a);
    scanf("%s",&a); // or
    
    printf("%s\n",a);
    printf("\nlength of String a : %d\n", sizeof(a)/sizeof(char));

   
    
    return 0 ;
}