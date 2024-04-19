#include<stdio.h>

int main(){
    int ar[3];
    // ar[0], ar[1], ar[2]
    for(int i=0; i<3; i++){
        scanf("%d",&ar[i]);
    }

    for(int i=0; i<3; i++){
        printf("ARRAY[%d]= %d\n",i, ar[i]);
    }
    
}