// Insert 'value' in an array in index =position .

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int ar[n+1]; // insert korar jonno size 1 beshi lagbe. //
    for(int i=0; i<n; i++ ){
        scanf("%d",&ar[i]);
    }

    int pos, value;
    printf("ENTER POSITION and VALUE : ");
    scanf("%d %d",&pos,&value) ;

    for(int i=n; i>pos; i--){  // Element is moved to RIGHT one by one 
        ar[i] = ar[i-1];
    }
     ar[pos]= value ;            // INSERT VALUE

    for(int i=0; i<n+1; i++){
        printf("%d ",ar[i]);
    }


    return 0 ;
}