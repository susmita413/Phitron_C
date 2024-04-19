// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C
//

#include<stdio.h>

int main(){
    char ch ;
    scanf("%c",&ch);
    if(ch != 'z'){
        printf("%c", ch+1);
    }
    else printf("%c",'a');
    return 0 ;
}
