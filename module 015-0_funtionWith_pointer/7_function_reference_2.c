#include<stdio.h>
#include<string.h>

void fun(char* ar){   // char ar[] OR, char* ar
    ar[0] = 'G';                 // Dereference
    ar[2] = 'Z' ;

    printf("%d\n",strlen(ar) ) ; //5
}

int main(){
    char ar[20]= "Hello" ;
    fun(ar);  // string er size pass korar doakar nei
    printf("%s\n",ar);

    return 0 ;
}