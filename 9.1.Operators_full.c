/*
5.Operators
1+2 => 1,2 are operands
+ is operator

Arthmatic operators
+, -, *, /, % - Modulo operator which gives remainder
4/2 = 2 - that is the result of division
4%2 = 0 - reminder 
1%2 = 1
3%2 = 1
75%5 = 0
74%5 = 4
74%5 = 4
Relational operators
> < <= >= 
== - Equality check 
!= - Inequality check

Logical operators
&& - Logical AND - if all the conditions true then only the whole condition is true
|| - Logical OR - if one of the conditions are true then the whole condition is true.
! = If the condition is true then result is false and if the condition is false and the result is true

BitWise operators
&, |, ^, << , >> , ~
& - Bit wise AND 
| - Bitwise OR
^ - Bitwise XOR
<<  - Left shift
>>  - right shift
~ - Negation

Increment/Decrement operators
++, --
++x -> pre Increment
x++ -> post Increment
--x -> pre Decrement
x-- -> post Decrement

Assignment operators
=, +=, -=. *=, /= , %=

int x = 10, y =20;
x= y; =>  asign contents of y to x // x == y
x = 25;
y = x;

Conditional operators
(cond)? True expression : False expression;
int a = 2, b =5;
int max =0;
max = (a>b)?a:b;

*/
#include <stdio.h>
int main()
{
    int x,y,z;
    printf("Enter three integers\n");
    scanf("%d %d %d", &x, &y,&z);
    
    //Arthmatic operators - Used for calculations
    //+,-,*,/,%
    
    //Approach 1, directly getting result
    printf("+ addition operator gives us sum of two numbers %d\n",x+y);
    printf("- minus operator gives us substraction of two numbers %d\n",x-y);
    printf("* multiplication operator gives us multiplication of two numbers %d\n",x*y);
    printf("/ division operator gives us division of two numbers %d\n",x/y);
    //to print % in printf you need to give %%
    printf("%% modulo operator gives us reminder of two numbers %d\n",x%y); 
    
    printf("\n\n");
    //Approach 2 get the result and store it in another variable, for further computation and output
    int sum = x+y;
    printf("x=%d y=%d sum=%d\n",x,y,sum);
    
    
    //Relational operators - Used for conditions
    //<, >, <=, >=, ==, !=
    printf("< less than operator finds whether first number is lower than the second number \
    \nif yes it will give 1 otherwise it will give 0 :result(%d)\n", x<y);
    
    printf("<= less than equal to operator finds whether first number is lower than the second number or equals\
    \nif yes it will give 1 otherwise it will give 0 :result(%d)\n", x<=y);
    
    printf("> greater than operator finds whether first number is bigger than the second number \
    \nif yes it will give 1 otherwise it will give 0 :result(%d)\n", x>y);
    
    printf(">= greater than equals to operator finds whether first number is bigger than the second number or equals\
    \nif yes it will give 1 otherwise it will give 0 :result(%d)\n", x>=y);
    
    printf("== equals to operator finds whether first number is equals second number \
    \nif yes it will give 1 otherwise it will give 0 :result(%d)\n", x==y);
    
    printf("!= not equals to operator finds whether first number is not equals second number \
    \nif yes it will give 1 otherwise it will give 0 :result(%d)\n", x!=y);
    
    
    printf("\n\n");
    //Logical operators - used in conjunction with conditions
    // && , ||, !
    printf("&& Logical AND operator tests condition by condition, \
    if all true gives 1 otherwise 0: (%d)\n", x>y && x>z);
    printf("|| Logical OR operator test condition by condition, \
    if one is true gives 1 otherwise 0: (%d)\n", x>y || x>z);
    printf("! Logical NOT operator inverts the condition result: \
    (%d)\n",!(x>y)); //!(x>y) = x<=y
    printf("\n\n");
    //BitWise operators
    // &, |, ^ , << , >> , ~
    
    
    //Example : 5 is written in binary as- 101 , 3 is written in binary as 011
    //5 & 3 =                              011
    /*
    AND TABLE - If all bits are true result is true. If one bit is false result is false. 
    Bit1    Bit2    Bit1&Bit2
    0       0           0
    0       1           0
    1       0           0
    1       1           1
    
    Bit1    Bit2    Bit1&Bit2
    F       F           F
    F       T           F
    T       F           F
    T       T           T


    OR TABLE - If one bit is true result is true. If all bits are false then only result is false.
    Bit1    Bit2    Bit1|Bit2
    0       0           0
    0       1           1
    1       0           1
    1       1           1
    
    Bit1    Bit2    Bit1|Bit2
    F       F           F
    F       T           T
    T       F           T
    T       T           T
    
    
    XOR TABLE - if two bits are same result is false. otherwise true.
    Bit1    Bit2    Bit1^Bit2
    0       0           0
    0       1           1
    1       0           1
    1       1           0
    
    Bit1    Bit2    Bit1|Bit2
    F       F           F
    F       T           T
    T       F           T
    T       T           F
    
    ~ Negation TABLE - if two bits are same result is false. otherwise true.
    Bit1    ~Bit1   
    0       1       
    1       0       

    Bit1    ~Bit1   
    F       T       
    T       F       
    */
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

    printf("\n\n");
    
    //Finding even or odd using bit wise and
    if((x & 1) == 0){ // 7-111 5-101 3-011 4-100 8-1000 16-10000 32-100000 12-1100, 7 & 1 , 111&001==> 1 , 100 & 001 ==> 0 
        printf("Given number is even number\n");
    }else{
        printf("Given number is odd number\n");
    }
    
    
    int p =5;
    printf("~p= %d\n", ~p& ~(0));
    
    
    int m = 10, n = 5;
    // Code to swap 'm' (1010) and 'n' (0101)
    m = m ^ n; // m now becomes 15 (1111)
    n = m ^ n; // n becomes 10 (1010)
    m = m ^ n; // m becomes 5 (0101)
    
   printf("m=%d n=%d\n", m, n); 
    /*
    Increment/Decrement operators
    ++, --
    ++x -> pre Increment
    x++ -> post Increment
    --x -> pre Decrement
    x-- -> post Decrement
    */
    
    int j =10, k=0;
    
    k = j; //j value will be assigned to k. K value becomes 10.
    
    printf("%d.j=%d k=%d\n", __LINE__,j, k);
    k= j++; //This is called post increment, So Assignment will happen first and then j will be incremented.
    //K becomes 10 here, J becomes 11 here.
    printf("%d.j=%d k=%d\n", __LINE__,j, k);
    k= ++j; //This is called pre increment, So increment will happen first and then j will be assigned to k.
    //K becomes 12 here, J becomes 12 here.
    printf("%d.j=%d k=%d\n", __LINE__,j, k);
    //k = ++j + j++ ; // This is undefined. because we dont know which j to use.
    k=--j;
    //k becomes 11, j becomes 11
    printf("%d.j=%d k=%d\n", __LINE__,j, k);
    k=j--;
    //k becomes 11, j becomes 10.
    printf("%d.j=%d k=%d\n", __LINE__,j, k);
    j++;
    printf("%d.j=%d k=%d\n", __LINE__,j, k);
    ++j;
    printf("%d.j=%d k=%d\n", __LINE__,j, k);

    /*
    Assignment operators
    =, +=, -=. *=, /= , %=
    
    int x = 10, y =20;
    x= y; =>  asign contents of y to x // x == y
    x = 25;
    y = x;
    */

    int g,h;
    g= 10; // this is assignment, copies the right side value to left side variable.
    h = g; // this is also an assignement.
    //10=g // this is wrong.
    
    x += y; // which means x = x+y; => sum = sum+i; => sum += i; 
    x -= y ; // x= x-y ; 
    x *= y ; // x = x*y; mul = mul * a[i] => mul *= a[i];
    x /= y; // x = x/y  , n = n/10; n /= 10; 
    x %= y; // x = x%y;
    x &= y; // x= x&y;
    

    /*
    Conditional operators
    (cond)? True expression : False expression;
    int a = 2, b =5;
    int max =0;
    max = (a>b)?a:b;
    */    
    int w  =10 ;
    int even  = (w%2==0)? 1:0;
    printf("%s", (w%2==0)? "Even": "Odd");
    
    
    
}









