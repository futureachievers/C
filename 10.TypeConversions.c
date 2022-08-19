
/*
implicit type conversions - automatically conversions
explicit type conversions
*/
#include <stdio.h>

int main()
{
    //implicit type conversions 
    int x = 10;
    char y ='a';
    
    int sum = x+ y ; // 'a' = 97 
    printf("sum=%d\n", sum);
    
    //explicit type conversions
    int a = 5, b = 2;
    float result = (float) a /b; //5.0/2 //(type) expression ;
    printf("result = %f\n", result);
    
    // -1L < 1U ==> -1L < 1L = True
    //-1L < 1UL ==> -1UL < 1UL = Flase. 
    
    if(-1L < 1U)
        printf("-1L < 1U is true\n");
    else 
        printf("-1L < 1U is false\n");
        
    if(-1L < 1UL)
        printf("-1L < 1UL is true\n");
    else 
        printf("-1L < 1UL is false\n");
    

        
    return 0;
}


