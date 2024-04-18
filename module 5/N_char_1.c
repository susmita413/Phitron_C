#include<stdio.h>

int main(){
    char ch ;
    scanf("%c",&ch);
    
    if(ch>='a' && ch<='z'){     // SMALL LETTER  
        int ans = ch- 32 ;     // "ans" IN "if" SCOPE / BLOCK / {}
        printf("%c",ans) ;
    }

    else if(ch>='A' && ch<='Z') {    // CAPITAL LETTER 
        int ans = ch+ 32 ;          // "ans" IN "else" SCOPE / BLOCK / {}
        printf("%c",ans) ;
    }
    return 0 ;
}

