// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/G
/*  He can form a nice Katryoshka using one of the following combinations:
   1.Two eyes and one body, 2.Two eyes, one mouth, and one body,
   3.One eye, one mouth, and one body.
  If the king has n eyes, m mouths and k bodies, 
 what is the largest number of Katryoshkas he can make?

 */

#include<stdio.h>
int main(){
    
    long long int n,m,k;
    scanf("%lld %lld %lld",&n,&m,&k);
    int count=0 ;
    
    if(n<=m && n<=k){
        count = n ; n=0 ;  m= m-n ;  k = k-n ;
    }
    else if(m<n && m<k){
        count = m ; m=0 ;  n= n-m ;  k = k-m ;
    }
    else {
        count = k; k=0;  m=m-k ; n=n-k ;
    }

    if(m==0){
        if(k*2 <=n) count = count+k;
        else if(k*2 >n){
            int half = n/2 ;
            count =count + half ;
        }
    }

    printf("%d\n",count);
    return 0;
}
