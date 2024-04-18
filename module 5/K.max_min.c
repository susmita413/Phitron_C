//Given 3 numbers A, B and C, Print the minimum and the maximum numbers.
// Only one line containing 3 numbers A, B and C ( - 10^5 ≤ A, B, C ≤ 10^5)

#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    if(a<=b && a<=c){
        printf("%d ",a);   // min= a
        if(b>=c){
            printf("%d",b);  // max= b
        }
        else{
            printf("%d",c);  // or, max= c
        }
    }

    else if(b<=a && b<=c){
        printf("%d ",b);   // min= b
        if(a>=c){
            printf("%d",a);  // max= a
        }
        else{
            printf("%d",c);  // or, max= c
        }
    }

    else{
        printf("%d ",c);   // min= c
        if(a>=b){
            printf("%d",a);  // max= a
        }
        else{
            printf("%d",b);  // or, max= b
        }
    }

    return 0 ;
}