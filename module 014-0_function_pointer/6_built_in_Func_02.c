// pow()

#include<stdio.h>
#include<math.h>

int main(){
    double a,b ;
    scanf("%lf %lf",&a,&b);
    printf("POWER of INT or DOUBLE value= %0.2lf\n",pow(a,b)); 

    int x,y;
    scanf("%d%d",&x,&y);
    int ans= pow(x,y);  // pow(x*1.0,y*1.0)
    printf("%d\n",ans);
    return 0 ;
}