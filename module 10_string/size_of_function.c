#include<stdio.h>

int main(){
    printf("SIZE OF INTEGER (byte): %d\n", sizeof(int));
    printf("SIZE OF Long Long INTEGER (byte): %d\n", sizeof(long long int));
    printf("SIZE OF Float (byte): %d\n", sizeof(float));
    printf("SIZE OF DOUBLE (byte): %d\n", sizeof(double));
    printf("SIZE OF CHAR (byte): %d\n\n", sizeof(char));

    int ar[5];
    int len = sizeof(ar)/sizeof(int);
    printf("LENGTH OF ARRAY 'ar'(NUMBER of INDEX) = %d\n", len);
    printf("SIZE OF WHOLE ARRAY 'ar'(byte) = %d\n", sizeof(ar));

    printf("\n\n");

    char b[6];
    printf("LENGTH of CHARACTER ARRAY 'b'(Number of INDEX) = %d\n", sizeof(b)/sizeof(char));
    printf("SIZE OF WHOLE ARRAY 'b'(byte) = %d\n", sizeof(b));


    return 0 ;
}