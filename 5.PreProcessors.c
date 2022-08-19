
/*
Pre Processors
#define NAME REPLACEMENT_TEXT
#define FUNCTION(arguments) LOGIC
*/

#define MAX_SIZE 200


#define ZEROCHAR '\0'


#define SQ(x) x*x

#define ADDNAMES(name1,name2) name1##name2

#include <stdio.h>

int main()
{
    int size = MAX_SIZE ; // int size = 100;
    const char *xy = "apple is my fav" ;

    printf("%d\n", MAX_SIZE); //  printf("%d\n", 100);
    
    printf("%d\n", SQ(2)); //2*2 
    
    printf("%d\n", SQ(2+3)); //2+3*2+3 =  2+6+3 = 11
    
    printf("%s\n", ADDNAMES(x,y));
}


