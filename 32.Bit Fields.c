#include <stdio.h>
/*
A famous usage of bitfields with unions
union {
    struct {
        unsigned int is_static: 1;
        unsigned int is_extern: 1;
        unsigned int is_auto: 1;
    };
    unsigned int flags;
};
*/
//Bit Fields
struct flags{
    unsigned int is_int:1;
    unsigned int is_char:1;
    unsigned int is_float:1;
    unsigned int is_double:1;
};

int main()
{
    //printf("Size of structure flags is %ld", sizeof(struct flags));
    struct flags f;
    f.is_int = 1; // 0
    f.is_float = 1; // 0
    f.is_char = 0;
    f.is_double = 1;
    if(f.is_int & 1){
        printf("The value is INT\n");
    }
    
    if(f.is_float & 1){
        printf("The value is FLOAT\n");
    }
    
    if(f.is_char & 1){
        printf("The value is CHAR\n");
    }
    
    if(f.is_double & 1){
        printf("The value is DOUBLE\n");
    }
            
    return 0;
}

