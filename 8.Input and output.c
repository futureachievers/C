/*
4.Input and Output
input function
int a, b;
scanf("%d %d", &a, &b);

output function
printf("a= %d b =%d", a,b);
printf("%d %d", a,b);


//Characters
char a, b;
scanf("%c %c", &a, &b);
printf("a= %c b =%c", a,b);

//Float
float a, b,c;
scanf("%f %f %f", &a, &b, &c);
printf("a= %f b =%f c=%f", a,b,c);
double a, b,c;
scanf("%lf %lf %lf", &a, &b, &c);
printf("a= %lf b =%lf c=%lf", a,b,c);

int a;
char ch1;
float big;
double max;
scanf("%d %c %f %lf",&a,&ch1,&big,&max);
printf("%d %c %f %lf",a,ch1,big,max );

*/
#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter three numbers for calculating the sum\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    int sum = num1+num2+num3;
    printf("n1 = %d n2 = %d n3 = %d sum = %d\n", num1, num2, num3, sum);
    
    printf("NAME\tROLLNO\tPERCENTAGE\n");
    
    return 0;
}


