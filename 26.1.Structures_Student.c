
#include <stdio.h>


struct student{
    char name[30]; // 30
    int rollno; //4 
    float percentage; //4 
    int total;
    char place[30]; //30
    int marks[6]; //24
};

int main()
{
    struct student s;

    printf("Enter student details\n");
    scanf("%s", s.name);
    scanf("%d", &s.rollno);
    scanf("%s", s.place);
    s.total = 0;
    for(int j =0; j< 6 ; j++){
        scanf("%d", &s.marks[j]);
        s.total = s.total + s.marks[j];
    }
    s.percentage = (float)s.total/6;
    
    
    printf("The student details are\n");

    printf("%s\t", s.name);
    printf("%d\t", s.rollno);
    printf("%s\t", s.place);
    for(int j =0; j< 6 ; j++){
        printf("%d\t", s.marks[j]);
    }
    printf("%d\t", s.total);
    printf("%0.2f",s.percentage);
    printf("\n");
    return 0;
}

