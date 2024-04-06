// NOT same work 
//in Do while - condition check in last step.
//s0, if I want to print value at least 1 time before FALSE CONDITION
// THEN I SHOULD USE do while


#include <stdio.h>
    int main()
    {
        int i=1;
        do{
            printf("%d \n",i) ;
            i= i+1 ;
        }
        while(i<=10);
        //while(i<=1);        // output(i) = 1
                          
        return 0;
    }
