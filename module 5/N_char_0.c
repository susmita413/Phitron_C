#include<stdio.h>

int main(){
    char ch ;
    scanf("%c",&ch);
    
    if(ch>=97 && ch<=122){     // SMALL LETTER  //OR,  if(ch>='a' && ch<='z') 
        int ans = ch- 32 ;     // "ans" DECLAIR IN "if" SCOPE / BLOCK / {}
        printf("%c",ans) ;
    }

    else{                     // CAPITAL LETTER  //OR, else if(ch>='A' && ch<='Z') 
        int ans = ch+ 32 ;    // "ans" DECLAIR IN "else" SCOPE / BLOCK / {}
        printf("%c",ans) ;
    }
    return 0 ;
}

/*
     char ch ='j' ;
*/