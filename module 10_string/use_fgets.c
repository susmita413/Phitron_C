// STRING INPUT with SPACE

#include<stdio.h>
#include<string.h>

int main(){
    char a[100]; 
   fgets(a,13,stdin);  //7 index array + NULL = total index =8
    a[12] = '\0';
    
    printf("%s\n",a);
    printf("\n SIZE of String a : %d\n", sizeof(a)/sizeof(char)); //100

    return 0 ;
}