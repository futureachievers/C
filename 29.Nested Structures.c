#include <stdio.h>

struct deductions
{
    int pf;
    int tax;
};
struct salary{
    int basic;
    int hra;
    int da;
    struct deductions d;
};
struct employee{
    char name[20];
    struct salary s;
    int age;
};

int main()
{
    struct employee e;
    printf("Enter employee details\n");
    scanf("%s %d", e.name, &e.age);
    scanf("%d %d %d", &e.s.basic, &e.s.hra, &e.s.da);
    scanf("%d %d", &e.s.d.pf, &e.s.d.tax);
    
    printf("Employee details are\n");
    printf("Name=%s age=%d\n", e.name, e.age);
    printf("basic=%d hra=%d da=%d\n", e.s.basic, e.s.hra, e.s.da);
    printf("Total Gross Salary=%d\n", e.s.basic + e.s.hra + e.s.da);
    printf("pf=%d tax=%d\n", e.s.d.pf, e.s.d.tax);
    printf("Total Net Salary=%d\n", e.s.basic + e.s.hra + e.s.da -  e.s.d.pf- e.s.d.tax);
    

    return 0;
}

