// COUNTING ARRAY / FREQUENCY ARRAY
// count character 'a' to 'z' from an ARRAY
// MAIN ARRAY's values start from 0, end with 27.
 //*** ALPHABETICALLY PRINT
 
#include<stdio.h>
#include<string.h>

int main(){
    char ar[100];
    scanf("%s",&ar);
    
    int cnt[26]={0} ;
    for(int i=0; i<strlen(ar); i++){
       int val= ar[i]-'a' ;
       cnt[val]= cnt[val]+1 ; // cnt[val]++
    }

    for(int i=0; i<26; i++){
        if(cnt[i] != 0)         // ALPHABETICALLY PRINT
            printf("%c = %d times\n",i+'a', cnt[i]);
    }

    return 0 ;
}