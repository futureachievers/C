
#include <stdio.h>
#include "myheader.h"
#include "myheader.h"
/*
#if 
#else
#elif 
#endif

#ifdef
#ifndef
*/

//#define WINDOWS 
//#define LINUX
#define MAC
int factorial(int n);
int main()
{
    int n = 5;
    int f = factorial(n);
    printf("Factorial of 5 is %d\n", f);
    print_n_numbers(10);
    
    #if defined(WINDOWS) 
        printf("WINDOWS MACHINE\n");
    #elif defined(LINUX)
        printf("LINUX MACHINE\n");
    #elif defined(MAC)
        printf("MAC MACHINE\n");
    #endif
    return 0;
}
#define NORMAL 0

#if NORMAL
int factorial(int n){
    int f = 1;
    printf("NORMAL FUNCTION IS CALLED\n");
    for(int i = 1; i<= n ;i++){
        f = f* i;
    }
    return f;
}
#else
int factorial(int n){
    if(n == 1){
        printf("RECURSIVE FUNCTION IS CALLED\n");
        return 1;
    }
    return n * factorial(n-1);
}
#endif
