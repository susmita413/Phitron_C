#include <stdio.h>
    int main()
    {
        int tk;
        scanf("%d",&tk);

        if (tk>=100) {     // 100 ---
            printf("burger khabo");
        }
        else if(tk>=50){       // 50- 99
            printf("Fuska khabo.");
        }
        else if(tk>=20){       // 20-49
            printf("Chips khabo.");
        }
        else{                // -- 0-19
            printf("KIsu khabo na.");
        }

        return 0 ;
    }