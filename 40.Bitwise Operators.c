
#include <stdio.h>

/*
BitWise operators
&, |, ^ , << , >> , ~

AND TABLE
Bit1    Bit2    Bit1&Bit2
0       0           0
0       1           0
1       0           0
1       1           1

OR TABLE
Bit1    Bit2    Bit1|Bit2
0       0           0
0       1           1
1       0           1
1       1           1

XOR TABLE
Bit1    Bit2    Bit1^Bit2
0       0           0
0       1           1
1       0           1
1       1           0

Negation Table
Bit1    ~Bit1   
0       1       
1       0  
*/

/*
5 -   101
4 -   100
5&4 - 100
5|4 - 101
5^4 - 001

*/
int main()
{
    int x, y;
    printf("Enter two numbers\n");
    scanf("%d %d", &x, &y);
    
    printf("AND operation result %d\n", x & y); // 4 //x & x = x
    printf("OR operation result %d\n", x | y);  // 5 // x |x = x
    printf("XOR operation result %d\n", x ^ y); // 1 // x^x = 0
    
    printf("Negation operation result on x:%d\n", ~x); // 7 = -8
    printf("Negation operation result on y:%d\n", ~y);
    
    printf("Left shitf x<<2 %d\n", x<<2); // 5*2 = 10 = 1010 - 10
    printf("Right shitf x>>2 %d\n", x>>2);// 5/2 = 2 = 010 - 2
    
    printf("Left shitf y<<2 %d\n", y<<2); //4*2 = 8 - 100 - 1000 
    printf("Right shitf y>>2 %d\n", y>>2); //4/2 = 2 - 100 - 010
    
    
    if(x & 1)
        printf("X is odd");
    else 
        printf("X is even");
    
    

    enum flags{
        INT = 1, 
        CHAR = 2, 
        FLOAT = 4, 
        DOUBLE  = 8
    } ;   
    int types_available = INT|FLOAT|CHAR;
    if(types_available & INT)
        printf("\nINT is available");
    
    if(types_available & CHAR )
        printf("\nCHAR is available");
    
    
    return 0;
}





/*
  //BitWise operators
    // &, |, ^ , << , >> , ~
    
    
    //Example : 5 is written in binary as- 101 , 3 is written in binary as 011
    //5 & 3 =                              011
    
    AND TABLE - If all bits are true result is true. If one bit is false result is false. 
    Bit1    Bit2    Bit1&Bit2
    0       0           0
    0       1           0
    1       0           0
    1       1           1
    

    OR TABLE - If one bit is true result is true. If all bits are false then only result is false.
    Bit1    Bit2    Bit1|Bit2
    0       0           0
    0       1           1
    1       0           1
    1       1           1

    
    
    XOR TABLE - if two bits are same result is false. otherwise true.
    Bit1    Bit2    Bit1^Bit2
    0       0           0
    0       1           1
    1       0           1
    1       1           0

    
    ~ Negation TABLE - if two bits are same result is false. otherwise true.
    Bit1    ~Bit1   
    0       1       
    1       0       

    // &, |, ^ Performed on 2 numbers
    printf("& Bitwise AND operator performs AND operations on bits of numbers results:%d\n", x&y); //1
    printf("| Bitwise OR operator performs OR operations on bits of numbers results:%d\n", x|y); //7 
    printf("^ Bitwise XOR operator performs XOR operations on bits of numbers results:%d\n", x^y); //6
    
    //~, << , >> Performed on single number
    printf("~ Negation operator performs Negation operations on bits of number results:%d\n", ~x);
    printf("<< left shift operator performs multiplication with 2 of a number \
    simply shifts bit positions to left and adds 0 at the last results:%d\n", x<<1);
    printf(">> right shift operator performs division with 2 of a number \
    simply shifts bit positions to right and adds 0 at the first results:%d\n", x>>1);


*/
