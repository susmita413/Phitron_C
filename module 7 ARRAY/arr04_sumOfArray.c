#include<stdio.h>

int main(){
    int n;     // ARRAY SIZE
    //int ar[n]; // here n= garbage value, so,Icannot get CURRECT size of array 
    scanf("%d",&n); 
   // int ar[n] = {5,6,7,8} ; // variable "ar" may not be initialized C/C++(145)

    int ar[n];

    for(int i=0; i<n; i++){
        scanf("%d",&ar[i]);
    }
    int sum=0;                           //SUM OF ARRAY
    for(int i=0; i<n; i++){
        sum= sum+ar[i] ;
       // sum += i ;
    }
    printf("SUM OF ARRAY ELEMENTS= %d", sum);

}