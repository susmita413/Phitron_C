// input - 10% 20%  | 10x 205y
// output- 10% 20%  | 10x 205y

#include<stdio.h>

int main(){
 int a,b ;
 char p;
 
 //printf("Hello");
 //scanf("%d%c %d%c",&a,&p,&b,&p);  // way-1: character input from user
 //scanf("%d%% %d%%",&a,&b) ;       // way-2: character input by Itself and
                                   //         user also input same character
 scanf("%dx %dy",&a,&b) ;         // way-2 _ x,y input by Itself

 printf("A= %dx \n B= %dy",a,b);
 //printf("A= %d%% \n B= %d%%",a,b);
 return 0;
}