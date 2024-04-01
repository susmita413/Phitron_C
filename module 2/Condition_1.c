#include <stdio.h>
    int main()
    {
        int tk;
        scanf("%d",&tk);

        if (tk>=100) 
            printf("BURGER KHABO\n");
        
                            // NOT CONNECTED 'if' //
        if(tk>=400) printf("RESTAURENT JABO");
        printf("SUSMITA PAUL.\n");

                   // less than 100 - NO OUTPUT
                   // >= 100 , <400 - BURGER KHABO
                   // >= 100, >=400 - BURGER KHABO 
                   //                 RESTAURENT JABO

        return 0;
    }