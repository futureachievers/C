/*
Enumeration (or enum) is a user defined data type in C. 
It is mainly used to assign names to integral constants
*/
#include <stdio.h>

enum condition{
    FALSE,
    TRUE
};

enum week{Sunday=1, Monday, Tuesday, Wednessday, Thrusday, Friday, Saturday};
enum year{Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};

enum type {
    INT = 1, //0001
    CHAR = 2,//0010  
    FLOAT = 4,//0100
    DOUBLE = 8 //1000
};
int main()
{
   enum condition result;
   char *week[]= {"Empty","Sunday", "Monday", "Tuesday", "Wednessday", "Thrusday", "Friday", "Saturday"};
   result = TRUE; // result = TRUE;
   printf("FALSE = %d\n", FALSE);
   printf("TRUE = %d\n", TRUE);
   printf("result = %d\n", result);
   
   printf("Weekdays\n");
   for(int day = Sunday ; day<= Saturday; day++){
       printf("%d = %s ", day, week[day]);
   }
   printf("\nMonths in an year\n");
   for(int i = Jan ; i<= Dec; i++){
       printf("%d ", i);
   }

    int types_available =0;
    types_available = INT| FLOAT |CHAR | DOUBLE ; // 0001 | 0100 = 0101 ==> 1111
    if(types_available  & INT){
        printf("\nInterger type is available\n");
    }
    
    if(types_available  & CHAR){
        printf("\nCharater type is available\n");
    }

    if(types_available  & FLOAT){
        printf("\nFloat type is available\n");
    }

    if(types_available  & DOUBLE){
        printf("\nDouble type is available\n");
    }

    


    return 0;
}

