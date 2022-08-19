
#include <stdio.h>

int main()
{
/*
Syntax:
switch(choice){
    case 1:
        statements;
        break;
    case 2:
        statements;
        break;
    case 3:
        statements;
        break;
    default:
        statements;
        break;
}
*/
    printf("Select operation\n1.Add\n2.Sub\n3.Multiplication\n4.Division\n");
    char ch;
    printf("Enter a choice\n");
    scanf("%c", &ch);
    int a,b;    
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);
    switch(ch){
        case '1': 
            printf("%d is addition result\n", a+b);
            break;
        case '2':
            printf("%d is substraction result\n", a-b);
            break;
        case '3':
            printf("%d is Multiplication result\n", a*b);
            break;
        case '4':
            if(b == 0){
                printf("Division is not possible with denominator 0\n");
                break;
            }
            printf("%d is division result\n", a/b);
            break;
        default:
            printf("Invalid choice");
            break;
    }

    return 0;
}

