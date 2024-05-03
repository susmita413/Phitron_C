 #include<stdio.h>

 int x= 500 ; // global

 void fun(){
    int s= 100 ;
    printf( " Address of s In FUN : %p\n", &s);
 }

 int main(){
    int s= 300 ;
    printf( " Address of s In MAIN : %p\n", &s);
    fun();
    for(int i=0; i<3; i++){
        int z= 999 ;
    }

    printf("%d\n",s);
    //printf("%d %d",i,z); //No access->error//identifier "i","z" is undefined
 }