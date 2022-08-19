#include <stdio.h>

extern int a;
extern int b;
static int factorial(int n);
void print_display()
{
    a++;
    //b++;
    printf("print_display:a= %d\n", a);
    factorial(5);
}

void static_check(){
    static int first = 1;
    if(first == 1){
        printf("Welcome to my function: static_check\n");
        first = 0;
    }else
        printf("You already called my function: static_check\n");
}

static int factorial(int n)
{
    int f = 1;
    for(int i = 1; i <=n ;i++){
        f = f* i;
    }
    printf("%d is %d factorial\n", f,n);
    return f;
}
