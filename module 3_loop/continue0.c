// Continue == skip work for  current step and 
//             go for next step.


#include <stdio.h>
    int main()
    {
        for(int i=1; i<=10; i=i+1){

        //  printf("%d\n",i);   // print(i) = 1 2 3 4 5 //NO WORK FOR CONTINUE
            if(i==5)
                continue;

            printf("%d\n",i); // print(i) = 1 2 3 4  6 7 8 9 10
        }

        return 0;
    }
