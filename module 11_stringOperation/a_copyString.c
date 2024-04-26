// Copy from ONE string to ANOTHER STRING
//
#include<stdio.h>
#include<string.h>
int main(){
    char a[100], b[100];
    scanf("%s %s",&a,&b);  // space will not accept in any string
    // for(int i=0; i<=strlen(b); i++){
    //     a[i] = b[i] ;  // COPY from STRING-b to STRING-a  // NULL CHARACTER also copied 
    // }

    strcpy(a,b);  // SAME WORK WITH FUNCTION
    printf("%s %s\n",a,b) ;
    return 0 ;
}