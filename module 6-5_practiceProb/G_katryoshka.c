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
    int count;
    while(1){
        if(n !=0 || m !=0 || k !=0){
            count++ ;
            n-- ;
            m-- ;
            k-- ;
        }
        if(n==0 || m==0 || k==0) break ;
    }

    if(m==0){
        if(k*2 <=n) count = count+k;
        else if(k*2 >n){
            while(n !=1){
                count++ ;
                n= n-2 ;
                k-- ;
            }
        }
    }

    printf("%d\n",count);
    return 0;
}
