// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/G


#include<stdio.h>
int main(){
    long long int n,m,k;
    scanf("%lld %lld %lld",&n,&m,&k);
    long long int min, ans=0 ;
                                  // find out minimum // condition 3 check
    if(n<=m && n<=k)  min = n;
    else if(m<=n && m<=k)  min = m;
    else  min= k ;
    
    ans = min; n= n-min; m= m-min ;  k= k-min ;   // answer = minimum value
    
    if(m==0){
        if((n/2)> k)  ans= ans+k ;    // 2nd case,condition 1 check
        else  ans= ans+(n/2) ;
    }
    printf("%lld",ans);
    return 0;

}
