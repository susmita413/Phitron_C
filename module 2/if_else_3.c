#include <stdio.h>
    int main()
    {
        int tk;
        scanf("%d",&tk);

        if (tk>=5000) {
            printf("COX'S BAZAR JABO.\n");

            if(tk>=10000){
                printf("SentMartin jabo.\n");
            }
            else if(tk>=8000){
                printf("Kuakata jabo.\n");
            }
            else{
                printf("FEROT CHOLE ASBO.\n");
            }

        }
        
        else{
            printf("KOTHAO JABO NA.\n");
        }

        return 0 ;
    }