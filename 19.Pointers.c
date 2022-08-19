/*
Pointer
Pointer is a variable which stores address of another variable.
*/
#include <stdio.h>
/*
int main()
{
    int a;
    int *ptr = NULL;
    ptr = &a;
    printf("Enter a value\n");
    scanf("%d", ptr); //scanf("%d", &a);
    printf("a=%d", *ptr); //printf("a=%d", a);
    *ptr = *ptr + 10 ; //a = a+ 10; // 20
    printf("After adding 10: a=%d", *ptr);
    
    printf("a= %d *ptr= %d ptr = %x &a = %x\n", a, *ptr, ptr, &a);
    return 0;
}
*/
/*
int main()
{
    int a, b;
    printf("Enter two values\n");
    scanf("%d %d", &a, &b);
    int *ptr1 = NULL, *ptr2= NULL;
    ptr1 = &a;
    ptr2= &b;
    int sum = *ptr1 + *ptr2;
    printf("sum = %d", sum);
    
}
*/


int main()
{
    int a, b;
    printf("Enter two values\n");
    scanf("%d %d", &a, &b);
    int *ptr1 = NULL;
    ptr1 = &a;
    printf("pointer value after setting to a = %d\n", *ptr1);
    
    ptr1 = &b;
    printf("pointer value after setting to b = %d\n", *ptr1);
}
