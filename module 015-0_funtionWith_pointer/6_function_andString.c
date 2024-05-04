#include<stdio.h>
#include<string.h>

void fun(char ar[]){   // char ar[] OR, char* ar

    printf("%d\n",strlen(ar) ) ; //5
    
}

int main(){
    char ar[20]= "Hello" ;
    fun(ar);  // string er size pass korar doakar nei

    return 0 ;
}