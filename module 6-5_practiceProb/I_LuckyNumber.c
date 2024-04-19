// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I
// A number of two digits is lucky if one of its digits is divisible by the other.


#include<stdio.h>
int main(){
    
    int n;
    scanf("%d",&n);
    int first = n/10 ;
    int second = n%10 ;
    if(second%first == 0 || first%second == 0) printf("YES\n");
    else printf("NO\n");
    return 0;
}
