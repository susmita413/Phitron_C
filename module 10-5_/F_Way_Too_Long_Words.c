// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F
// Given a string S. Print the origin string if it's not too long 
//otherwise, print the special abbreviation.


#include<stdio.h>
#include<string.h>

int main(){
    int t;
    scanf("%d",&t);
    char a[101];

    for(int i=1; i<=t ; i++){
        scanf("%s",&a);
        if(strlen(a) >10){
            int len = strlen(a) ;
            printf("%c%d%c\n",a[0],len-2 , a[len-1]);
        }
        else{
            printf("%s\n",a);
        }
    }
    return 0 ;
}