#include<stdio.h>
#include <string.h>

int main(){
    char a[100];
    scanf("%s",&a); // scanf diye input niyai 'space' er porer gula count hobena. //
    int count=0, i=0 ;

    while(a[i] != '\0'){
        count++ ; i++ ;
    }

    printf("\nLENGTH OF CHARACTER ARRAY a = %d", count);
    printf("\nLENGTH OF CHARACTER ARRAY a = %d", strlen(a) ) ;
    return 0 ; 
}