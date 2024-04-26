// STRING INPUT with SPACE

#include<stdio.h>
#include<string.h>

int main(){
    char a[100]; 
    gets(a);    //Do not give input , length>100
    
    printf("%s\n",a);
    printf("\nlength of String a : %d\n", sizeof(a)/sizeof(char)); //100

    return 0 ;
}