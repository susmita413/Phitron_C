//loop with condition
// even print from 1 to n

#include <stdio.h>
    int main()
    {
        int n;
        scanf("%d",&n) ;
        
        for(int i=1; i<=n; i=i+1){
            if(i%2 == 0)
                printf("%d - Even\n",i) ;
            else
                printf("%d - Odd\n",i) ;  
        }

        return 0;
    }

    /*
    *   if(i%2 == 0)
                printf("%d - Even\n",i) ;
            else
                continue ;
            
    */