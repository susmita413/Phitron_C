#include<stdio.h>
#include<string.h>

int is_palindrome(char a[]) {
    int i=0, j= strlen(a)-1 ;
    int ans =1;

    while(i<j){
        if(a[i] != a[j]){ 
           ans= 0;
           break ;
        }
        if(a[i]== a[j]){
           i++ ;
           j-- ;
       }
    }
    return ans ;
}


int main(){
    char a[1001];
    fgets(a,1001,stdin);
    int ans = is_palindrome(a);
    
    
    if(ans==1){
        printf("Palindrome\n");
    }    
    else {
        printf("Not Palindrome\n");
    }
        

    return 0 ;
}