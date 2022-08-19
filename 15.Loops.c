
#include <stdio.h>
/*
1.Initialization 
2.Condition
3.Statements
4.Increment or decrement Statements
Initialization Only happens once.
2,3,4 will be repeated until Condition fails.

We have three loops 
while 
do while
for
Mostly we will write programs using while and for loops.

Initialization
while(Condition){
    statements
    increment or decrement statment
}

Initialization
do {
    statements
    increment or decrement statement
}while(condition);

for(Initialization;condition;increment or decrement statements){
    statements
}

*/
int main()
{
    //Entry control loop
    int i =1; //Initialization
    while(i<=5){ //condition
        printf("%d ",i); //statements
        i++;  //increment statement
    }
    
    
    printf("\n");
    //Exit control loop
    i =1; //Initialization
    do { 
        printf("%d ",i); //statements
        i++;  //increment statement
    }while(i<=5); //condition

    printf("\n");
    //Entry control Loop
    for(i=1; i<=5; i++){ //Initialization ; condition ;increment statement
        printf("%d ",i); //statements
    }

    printf("\n");
    int sum = 0; 
    for(i=5; i>=1; i--){ //Initialization ; condition ;decrement statement
        printf("%d ",i); //statements
        sum = sum + i ;
    }
    printf("\nsum=%d\n", sum);
    
    printf("\n");
    i =5; //Initialization
    while(i>=1){ //condition
        printf("%d ",i); //statements
        i--;  //decrement statement
    }

    return 0;
}

