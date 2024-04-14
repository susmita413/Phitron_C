#include<stdio.h>

int main(){
     int x;
     scanf("%d",&x);
     int count=0 ;
     int cur_distance= x;
     
     while(cur_distance!=0){
        if(cur_distance>=3){
            cur_distance= cur_distance-3 ;
        }
        else if(cur_distance>1 && cur_distance<3){
            cur_distance= cur_distance-2 ;
        }
        else if(cur_distance == 1){
            cur_distance= cur_distance-1 ;
        }
        count++ ;
    }
    printf("%d",count);

    return 0 ;
}