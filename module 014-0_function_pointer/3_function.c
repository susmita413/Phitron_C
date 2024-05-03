// return + No parameter
// return_type name (){
//     // code
//     return ?
// }

#include<stdio.h>
 int sum() ;

int main(){
    int s = sum();
    printf("%d\n", s);
}

int sum(void){
    int x,y ;
    scanf("%d %d",&x,&y);
    int sum = x+y ;
    return sum ;
}