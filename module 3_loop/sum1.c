// sum 1 to n //

#include <stdio.h>
    int main()
    {
        int i;
        int n;
        long long int sum=0 ;
        scanf("%d",&n);            //input: 10000007
        for(i=1; i<=n; i=i+1){
            sum= sum+ i ;
        }

        printf("SUM= %lld", sum) ;  // output: SUM= 50000075000028

        return 0;
    }