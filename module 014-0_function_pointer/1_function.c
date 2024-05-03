// return + parameter
// sum of two value

// return_type name (parameter){
//     // code
//     return ?
// }

#include<stdio.h>
 
int sum(int x, int y){
    int sum = x+y ;
    return sum ;
}

int main(){
    int ans = sum(10,20);
    printf("%d\n",ans);
    printf("%d\n", sum(20,80));
}
