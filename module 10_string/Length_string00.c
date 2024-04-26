#include<stdio.h>

int main(){
    char a[100];
    scanf("%s",&a); // scanf diye input niyai 'space' er porer gula count hobena. //
    int count=0 ;
    for(int i=0; a[i] != '\0' ; i++){
        count++ ;
    }
    printf("LENGTH OF CHARACTER ARRAY a = %d", count);

    return 0 ;
}