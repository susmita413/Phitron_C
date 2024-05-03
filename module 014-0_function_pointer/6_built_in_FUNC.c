// celi(), floor(), round()

#include<stdio.h>
#include<math.h>

int main(){
    double x;
    scanf("%lf",&x);

    // int ceil_ = ceil(x);
    // int floor_ = floor(x);
    // int round_ = round(x);
    // printf("Ceil value= %d\n", ceil_);
    // printf("Floor value= %d\n", floor_);
    // printf("Round value= %d\n", round_); 

    printf("Ceil value= %.0f\n", ceil(x));   // Displaying ceil as a whole number
    printf("Floor value= %.0f\n", floor(x)); // Displaying floor as a whole number
    printf("Round value= %.0f\n", round(x)); // Displaying round as a whole number

    return 0 ;
}