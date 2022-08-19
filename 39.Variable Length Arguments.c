
#include <stdio.h>
#include <stdarg.h>
int sum(int, ...); //function declaration with ... means variable length arguments function.
int main()
{
    printf("Sum of given numbers sum(2, 1, 2):%d\n", sum(2, 1, 2));
    printf("Sum of given numbers sum(3, 1,2,3):%d\n", sum(3, 1,2,3));
    printf("Sum of given numbers sum(4, 1,2,3,4):%d\n", sum(4, 1,2,3,4));
    printf("Sum of given numbers sum(5, 1,2,3,4,5):%d\n", sum(5, 1,2,3,4,5));
    printf("Sum of given numbers sum(6, 1,2,3,4,5, 10):%d\n", sum(6, 1,2,3,4,5, 10));
    
    return 0;
}

int sum(int n, ...){
    va_list arglist; // create list
    va_start(arglist, n); // initialize list with n elements
    int sum = 0;
    for(int i = 0 ; i < n; i++){
        //Get each element using va_arg
        sum += va_arg(arglist, int); // sum = sum+ va_arg(arglist, int);
    }
    va_end(arglist); //clear the list
    return sum;
}

/*
//Normal function - will not accept more or less arguments
int sum(int a, int b);

int main()
{
    //printf("Sum of given numbers %d\n", sum(10));    
    printf("Sum of given numbers %d\n", sum(10,20));
    //printf("Sum of given numbers %d\n", sum(3, 1,2,3));
    //printf("Sum of given numbers %d\n", sum(4, 1,2,3,4));
    //printf("Sum of given numbers %d\n", sum(5, 1,2,3,4,5));
    return 0;
}

int sum(int a, int b)
{
    return a+b;
}
*/

