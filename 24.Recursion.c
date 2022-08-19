/*
Recursion
A function calling itself is called Recursion.
*/
#include <stdio.h>
int factorial_normal(int);
int factorial_recursion(int);
int fib(int n);
int main()
{
    int n;
    printf("Enter a number to find factorial\n");
    scanf("%d", &n);
    printf("factorial_normal is %d\n", factorial_normal(n));
    printf("factorial_recursion is %d\n", factorial_recursion(n));
    printf("Fib of 7 - %d\n", fib(7));
    printf("Fib of 8 - %d\n", fib(8));
    return 0;
}
//5! = 5*4*3*2*1
//5! = 5*4!
int factorial_recursion(int n)
{
    if(n == 0 )
        return 0;
    if(n == 1)
        return 1;
    
    return n * factorial_recursion(n-1); // 5 * 4 * 3 *2 * 1= 120
}
int factorial_normal(int n)
{
    int f =1;
    if(n == 0 )
        return 0;
    for(int i =1 ; i<=n; i++)
    {
        f = f* i; // 1* 1 , 1, 1*2 = 2, 2*3 =6, 6*4 = 24, 24 *5 = 120
    }
    return f;
}

// 0  1  1  2  3  5  8  13
// f1 f2 f3 f4 f5 f6 f7 f8

int fib(int n)
{
    if (n == 1 )
        return 0;
    if(n == 2)
        return 1;
    return fib(n-1) + fib(n-2); // tree structure
}


