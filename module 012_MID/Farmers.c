/* Suppose there are M1 farmers who can complete a work in D days. Fortunately, some other farmers appeard in the village
 before the start of the work, and now there are M2 additional farmers. 
 Can you determine how many fewer days it will take for them to complete the task?
*/

#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    
    for(int i=1; i<=t; i++){
       int m1,m2,d;
       scanf("%d%d%d", &m1,&m2,&d);
       int ans1 = (m1*d)/(m1+m2) ;
       int final_ans = d- ans1 ;
       printf("%d\n",final_ans);

    }
    return 0 ;
}