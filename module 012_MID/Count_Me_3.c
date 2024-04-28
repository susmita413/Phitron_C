// tell how many of them are capital alphabets, 
// how many are small alphabets and how many are digits.

#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d",&n);
    char ar[10001];
    for(int i=1; i<=n; i++){
        scanf("%s",ar);
        int cap=0, small=0, digit=0 ;
        for(int k=0; k<strlen(ar); k++){
            if(ar[k]>= 'A' && ar[k]<= 'Z') cap++ ;
            else if(ar[k]>= 'a' && ar[k]<= 'z') small++ ;
            else digit++ ;
        }
        printf("%d %d %d\n",cap,small,digit);
    }
    

    return 0 ;
}