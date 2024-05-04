#include<stdio.h>

void fun(int ar[], int n){   // int *ar  OR, int ar[]  2vabei receive kora jai
   
    for(int i=0; i<n; i++){
        printf(" %d ", ar[i]);
    }
    ar[1]= 500 ;           // value is changed // dereference
    printf("\n");
}

int main(){
   int ar[5]= {10, 20, 30, 40, 50} ;
    // for(int i=0; i<5; i++){
    //     printf(" %d ", ar[i]);
    // }
    // printf("\n");

    fun(ar,5);  // array te size pass korte hoy

    for(int i=0; i<5; i++){
        printf(" %d ", ar[i]);
    }
    printf("\n");

    return 0 ;
}