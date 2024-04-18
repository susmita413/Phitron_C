//Given 3 numbers A, B and C, Print the minimum and the maximum numbers.
// Only one line containing 3 numbers A, B and C ( - 10^5 ≤ A, B, C ≤ 10^5)
// easily

#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
                                 //Minimum
    if(a<=b && a<=c){
        printf("%d ",a);   // min= a 
    }
    else if(b<=a && b<=c){
        printf("%d ",b);   // min= b
    }
    else{
        printf("%d ",c);   // min= c
    }

                                   // MAXIMUM

    if(a>=b && a>=c){
        printf("%d",a);   // MAX= a 
    }
    else if(b>=a && b>=c){
        printf("%d",b);   // MAX= b
    }
    else{
        printf("%d",c);   // MAX= c
    }

    return 0 ;
}