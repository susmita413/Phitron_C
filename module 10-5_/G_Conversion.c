// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G
// Replace every comma character ',' with a space character.
// Replace every capital character in STRING with its respective small character and Vice Versa.

#include<stdio.h>
#include<string.h>
int main(){
    char a[100001];
    scanf("%s",&a);
    for(int i=0; i<strlen(a); i++){
        if(a[i]>= 'A' && a[i]<= 'Z')
             a[i]= a[i]+32;
        else if(a[i]>= 'a' && a[i]<= 'z')
             a[i]= a[i]-32;
        else if( a[i]== ',')
             a[i] = ' ';    
    }
    printf("%s",a);
    return 0 ;
}