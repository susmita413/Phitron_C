// Lexicographically compare

#include<stdio.h>
#include<string.h>
int main(){
    char a[100], b[100];
    scanf("%s %s",a,b);
    int i=0 ;
    while(1){
        if(a[i]=='\0' && b[i]=='\0'){        // FOR NULL CHECK
            printf("SAME STRING\n"); break ;
        }
        else if(a[i]=='\0') {
            printf("A is smaller\n"); break; 
        }
        else if(b[i]=='\0'){
            printf("B is smaller\n"); break ; 
        }

        if(a[i]== b[i]){                  // FOR LETTER CHECK
             i++ ;
        }
        else if(a[i]>b[i]){ 
            printf("B is smaller\n"); break ;
        }
        else {
            printf("A is smaller\n"); break ; 
        }


    }
    return 0 ;
}