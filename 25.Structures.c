/*
structure syntax
struct StructureName {
    types of data;
};
collection of different/hetrogeneous elements
*/
#include <stdio.h>
#include <math.h>

struct point{
    int x;
    int y;
};

struct student{
    char name[30]; // 30
    int rollno; //4 
    float percentage; //4 
    char place[30]; //30
    int marks[6]; //24
};

int main()
{
    struct point a,b;
    printf("Enter two points\n");
    scanf("%d %d %d %d", &a.x, &a.y, &b.x ,&b.y);
    printf("point1 (%d,%d) point2 (%d,%d)\n", a.x, a.y, b.x ,b.y);
    float distance = 0;
    distance = sqrt((b.x-a.x)*(b.x-a.x) + (b.y-a.y) * (b.y-a.y) );
    printf("Distance is %f\n", distance);

    printf("Size of struct point %ld struct student %ld", sizeof(struct point), sizeof(struct student));
    return 0;
}

