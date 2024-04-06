//break = stop work from current step


#include <stdio.h>
    int main()
    {
    
        for(int i=1; i<=10; i=i+1){

        //  printf("%d\n",i);   // print(i) = 1 2 3 4 5 // if I==5 is DANGER ZONE, USER ALREADY DEAD
            if(i==5)
                break;

            printf("%d\n",i); // print(i) = 1 2 3 4
        }

        return 0;
    }
