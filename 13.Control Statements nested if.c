
#include <stdio.h>

int main()
{
/*
Syntax:
if(condition1){
    if(condition2){
        if(condition3){
            
        }
    }else if(condition4){
        
    }else{
        
    }
}else {
    
}
*/  
    int n; 
    printf("Enter a number\n");
    scanf("%d", &n);
    if(n %2 == 0){ // if(n%2 == 0 && n %3 == 0)
        if(n %3 == 0){
            printf("The number %d is divisible by 2 and 3\n", n);
        }else { //else if(n%2 == 0 && n %3 != 0)
            printf("The number %d is divisible by 2 but not divisible by 3\n", n);
        }
    }else {
        if(n %3 == 0){ //else if(n%2 != 0 && n %3 == 0)
            printf("The number %d is not divisible by 2 and divisible by 3\n", n);
        }else { //if(n%2 != 0 && n %3 != 0)
            printf("The number %d is not divisible by 2 and not divisible by 3\n", n);
        }
    }


    return 0;
}

