#include <stdio.h>
/*
Function Prototype
return-type function-name(argument list);

Function Call
function-name(argument list);

Function Definition
return-type function-name(argument list){
    Body
}
Code reusability
Write once use many times.
*/

int sum(int, int); // Prototype
void swap_cv(int, int);
void swap_cr(int *, int*);
int main()
{
    int a, b;
    printf("Enter two values\n");
    scanf("%d %d", &a, &b);
    int s = sum(a,b); // Function call
    printf("sum=%d\n", s); // printf("sum=%d", sum(a,b));
    
    
    printf("%d.a= %d b=%d\n", __LINE__,a,b);
    swap_cv(a,b); //call by value - Pass Value
    printf("%d.a= %d b=%d\n", __LINE__,a,b);
    
    swap_cr(&a,&b); //call by reference-Pass address
    printf("%d.a= %d b=%d\n", __LINE__,a,b);
    
    return 0;
}
//Definition
int sum(int x, int y)
{
    return x+y;
}
//Call by value
void swap_cv(int a, int b)
{
    int temp =a;
    a=b;
    b=temp ; 
    printf("%d.a= %d b=%d\n", __LINE__,a,b);
}
//Call by reference
void swap_cr(int *a, int *b)
{
    int temp = *a;
    *a= *b;
    *b=temp ; 
    printf("%d.a= %d b=%d\n", __LINE__,*a,*b);
}




