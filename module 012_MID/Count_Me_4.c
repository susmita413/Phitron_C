// You need to tell how many time each alphabets from a to z appears.
// But if the count is zero, you don't need to prin that.

#include<stdio.h>
#include<string.h>

int main(){
    char ar[10001];
    scanf("%s",ar);
    int count[26]={0};
    for(int i=0; i<strlen(ar); i++){
        int val = ar[i]- 'a' ;
        count[val]= count[val]+1 ;
    }

    for(int i=0; i<26; i++){
        if(count[i] != 0){
            printf("%c - %d\n", i+'a' ,count[i] );
        }
    }
    return 0 ;
}