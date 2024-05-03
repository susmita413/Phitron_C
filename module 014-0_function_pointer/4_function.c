// return + No parameter
// void name (parameter){
//     // code
//     return 0 or no return
// }

#include<stdio.h>
void sum(int x, int y){
    int sum = x+y ;
    // return ;
    printf("%d\n",sum);
}

int main(){
    int x,y ;
    scanf("%d %d",&x,&y);
    sum(x,y);

    return 0 ;
}

