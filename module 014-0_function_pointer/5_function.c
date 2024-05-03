// No return + No peremeter
//// void name (void){
//     // code
//     return 0 or no return
// }

#include<stdio.h>
void sum(void){
    int x,y ;
    scanf("%d %d",&x,&y);
    int sum = x+y ;
    printf("%d\n",sum);
}

int main(){
    sum();
    sum();
    sum();

    return 0 ;
}