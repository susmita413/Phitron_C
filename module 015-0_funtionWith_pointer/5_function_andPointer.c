#include<stdio.h>

void fun(double *ar, int n){  //  double *ar  OR, double ar[]  2vabei receive kora jai

    //printf("%d\n", sizeof(ar)/sizeof(int) ); // warning // likhatai vul karon sudhu 0 index er access ase.
    for(int i=0; i<n; i++){
        printf(" %0.2lf \n", ar[i]);
    }

}

int main(){
    double ar[5]= {10.5, 20.6, 30.7, 40.8, 50.9} ;
    fun(ar,5);  // array te size pass korte hoy

    return 0 ;
}