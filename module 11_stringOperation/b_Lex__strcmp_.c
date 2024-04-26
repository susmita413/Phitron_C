// Lexicographically compare WITH "strcmp()" FUNCTION


#include<stdio.h>
#include<string.h>

int main(){
    char a[100], b[100];
    scanf("%s %s",a,b);

    int ans = strcmp(a,b);

    if(ans<0) printf("A is SMALLER");  // most of time ans=-1
    else if(ans==0) printf("SAME STRING");
    else if(ans>0) printf("B is SMALLER"); // most of time ans=1


    return 0 ;
}