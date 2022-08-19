/*
2.Data Types & Format Specifiers
int - 4 bytes - %d
char - 1 byte - %c
float - 4 bytes  - %f
double - 8 bytes - %lf

signed and unsigned
long and short
short int - %d 2
long int - %ld - 8 
unsigned int - %u
long unsigned int - %lu

sizeof(int) => will get the size of int type
const
*/


#include <stdio.h>

int main()
{
    //printf("%d\n", 10+20);
    printf("size of int is %ld bytes\n", sizeof(int));
    printf("size of char is %ld bytes\n", sizeof(char));
    printf("size of float is %ld bytes\n", sizeof(float));
    printf("size of double is %ld bytes\n", sizeof(double));
    
    
    printf("size of short int is %ld bytes\n", sizeof(short int));
    printf("size of long int is %ld bytes\n", sizeof(long int));
    
    printf("size of signed int is %ld bytes\n", sizeof(int));
    printf("size of unsigned int is %ld bytes\n", sizeof(unsigned int));


    

    return 0;
}


