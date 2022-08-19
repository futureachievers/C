
#include <stdio.h>

int main()
{
  //if
  //if else
  //if else if
  //nested if
  //switch
  /*
  if(condition){
      statements; // these will be executed if the condition is true.
  }
  
  
    int x = 20;
    if(x > 10){
        printf("X is more than 10\n");
        printf("%d is x value\n",x);
    }
    */
    
    /*
    syntax of if-else
    if(condition) {
        true block statements;
    }else {
        false block statements;
    }
    */
    int a, b;
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);
    if(a> b) {
        printf("a=%d is max\n",a);
    }else {
        printf("b=%d is max\n",b);
    }
    
    
    if(a< b) {
        printf("a=%d is min\n",a);
    }else {
        printf("b=%d is min\n",b);
    }
    
    
    int n;
    printf("Enter a number to check it is even or odd\n");
    scanf("%d", &n);
    if(n % 2 == 0){
        printf("%d is an even number\n", n);
    }else {
        printf("%d is an odd number\n", n);
    }
    

    return 0;
}

