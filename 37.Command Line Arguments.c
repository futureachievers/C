
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//First argument is always program name.
//every argument is a string.
//argv[argc] is NULL.
//./a.out one two three
//./a.out sum 12 15;  ./a.out sub 12 15 ; ./a.out mul 4 5 ; ./a.out div 8 2 

//int main(int argc, char **argv)
int main(int argc, char *argv[])
{
    printf("argument count = %d", argc);
    for(int i = 0; i< argc; i++)
        printf("Argument %d:%s\t ",i+1, argv[i]);
        
    if(argc < 4){
        printf("Usage : ./a.out add_more 3 1 2 3; ./a.out sum 12 15;  ./a.out sub 12 15 ; ./a.out mul 4 5 ; ./a.out div 8 2");
        return 0;
    }    
    
    
    
    if(strcmp(argv[1], "sum") == 0){
        printf("%d is the Addtion\n", atoi(argv[2])+ atoi(argv[3]));
    }else if (strcmp(argv[1], "sub") == 0){
        printf("%d is the substraction\n", atoi(argv[2])- atoi(argv[3]));
    }else if (strcmp(argv[1], "mul") == 0){
        printf("%d is the multiplication\n", atoi(argv[2])* atoi(argv[3]));
    }else if (strcmp(argv[1], "div") == 0){
        printf("%d is the division\n", atoi(argv[2])/ atoi(argv[3]));
    }else if(strcmp(argv[1], "add_more") == 0){ 
        int sum = 0;
        for(int i = 0; i< atoi(argv[2]); i++){
            sum = sum+ atoi(argv[i+3]);
        }
        printf("sum = %d\n", sum);
    } 
    else {
        printf("Invalid Operation");
    }

    
    return 0;
}




