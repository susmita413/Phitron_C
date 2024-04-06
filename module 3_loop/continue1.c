//loop with condition and use of continue
// even print from 1 to n

#include <stdio.h>
    int main()
    {
        int n;
        scanf("%d",&n) ;
        
        for(int i=1; i<=n; i=i+1){
            if(i%2 != 0)
                continue ;
            else
                printf("%d - Even\n",i) ;
        }

        return 0;
    }

    