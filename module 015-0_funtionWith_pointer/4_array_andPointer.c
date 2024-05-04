#include<stdio.h>

int main(){
    int ar[5]= {10,20,30, 40, 50};
    printf("0th index er address= %p\n", &ar[0]);
    printf("0th index er address= %p\n", ar);    // array er address only 0 index ke indicate kore

    printf("0th index er VALUE= %d\n", ar[0]);
    printf("0th index er VALUE= %d\n", *ar);

    printf("%d\n", ar[1]);    // 20            // 4 vabe likha jai
    printf("%d\n", *(ar+1));  // 20
    printf("%d\n", *(1+ar));    // 20
    printf("%d\n", 1[ar]);     // 20

    printf("%d %d %d\n", ar[2],ar[3],ar[4]);             // 30 40 50
    printf("%d %d %d\n", *(ar+2), *(ar+3), *(ar+4) );    // 30 40 50
    printf("%d %d %d\n", *(2+ar), *(3+ar), *(4+ar) );    // 30 40 50
    printf("%d %d %d\n", 2[ar], 3[ar], 4[ar]);           // 30 40 50
    
    
    return 0 ;
}