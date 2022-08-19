
#include <stdio.h>

int main()
{
/*
Syntax :
if(first condition){
    true statements for first condition
}else if(second condition){
    true statements for second condition
}else if(third condition){
    true statements for third condition
}else {
    when all conditions are false then these statements will be executed
}
*/
/*program1:

    int n;
    printf("Enter a number");
    scanf("%d", &n);

    if(n > 0){
        printf("%d is a positive number",n);
    }else if(n< 0){
        printf("%d is a negative number", n);
    }else {
        printf("%d is neutral", n);
    }
*/
    int a,b,c;
    printf("Enter three numbers");
    scanf("%d %d %d", &a,&b,&c);
    if(a>b && a>c){
        printf("a=%d is max", a);
    }else if(b>a && b>c){
        printf("b=%d is max", b);
    }else {
        printf("c=%d is max",c);
    }



    return 0;
}

