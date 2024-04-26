// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I

// Determine whether S is Palindrome or not

#include<stdio.h>
#include<string.h>

int main(){
    char a[1001];
    scanf("%s",&a) ;
    int i=0, j= strlen(a)-1 ;
    int ans =1;
    while(i<j){
        if(a[i] != a[j]){ 
           ans= 0; break ;
        }
        if(a[i]== a[j]){
           i++ , j-- ;
       }
    }
    if(ans==1) printf("YES\n");
    else printf("NO\n");

    return 0 ;
}