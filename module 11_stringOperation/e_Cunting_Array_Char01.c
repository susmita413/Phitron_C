// COUNTING ARRAY / FREQUENCY ARRAY
// count character 'a' to 'z' from an ARRAY
// MAIN ARRAY's values start from 0, end with 27.
//** string CHARECTER WISE PRINT

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

    for(int i=0; i<strlen(ar); i++){      //string CHARECTER WISE PRINT
        int val = ar[i] - 'a' ;
        if(cnt[val] != 0)
            printf("%c = %d times\n",ar[i], cnt[val]);
        cnt[val]= 0 ;
    }

    return 0 ;
}