// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/E

#include<stdio.h>

int main(){
    char a[1000001];
    scanf("%s",&a);
    int sum=0 ;
    for(int i=0; a[i] !='\0' ; i++){
        int digit= a[i] - '0';
        sum= sum+ digit ; 
    }
    printf("%d",sum) ;
    return 0 ;
}