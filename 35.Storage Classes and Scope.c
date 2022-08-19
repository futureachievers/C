
#include <stdio.h>
/*
auto - End of Block - stores in Stack -  local variables(default for a variable declared in block)
extern - Global Variables - Data Segment- can be accessed in Multiple files - End of the program
static - static local - Block scope ; static global - file scope - data segment 
register - stores in registers  - Block scope - faster access.
default values - auto - garbage, register - garbage, static - 0 , extern/global - 0
*/

int a = 12; // Global variable
static int b = 20; //static global
void print();
void print_display();
void static_check();
//static int factorial(int n);
int main()
{
    int a = 0; //auto or local variable
    a = 10;
    
    register int count = 0; //for faster access
    
    
    {
        int b;
        b = 10;
    }

    //printf("%d", b);
    print();
    print_display();
    
    for(int i = 0; i< 10 ; i++){
        //int j = 10; // initialization happens every time the block entered
        static int j = 10; // initialization happens once.
        printf("j = %d\t ", j);
        j++;
        count++;
    }

    printf("\n");
    static_check();
    static_check();
    static_check();
    //factorial(5);
    return 0;
}

void print(){
    a++;
    b++;
    printf("print:a= %d b=%d \n", a,b);
}

