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
    long long int count=0 ;
    
    if(n<m && n<k){
        count = n ;  m= m-n ;  k = k-n ;  n=0 ;
    }
    else if(m<n && m<k){
        count = m ; n= n-m ;  k = k-m ; m=0 ;
    }
    else {
        count = k;  m=m-k ; n=n-k ; k=0;
    }
 
    long long int count2 =0 ;
    if(m==0){
            if((n/2)> k){
               count2= k ;
            } 
            else{
               count2 = n/2 ;
            } 
    }
    printf("%lld",count+ count2);
    return 0;
 
}
