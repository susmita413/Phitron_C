// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D
//

#include<stdio.h>

int main(){
    long long int a,b,c,d ;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    if(d== a+b-c || d== a+b*c || d== a-b+c || d== a-b*c || d== a*b+c|| d== a*b-c){
        printf("YES\n");
    }
    else printf("NO\n");
    return 0 ;
}
