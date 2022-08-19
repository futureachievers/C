
#include <stdio.h>
#include <stdlib.h>


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
    struct student *s = NULL;
    struct student *temp = NULL;
    int n;
    printf("Enter how many students you have\n");
    scanf("%d", &n);
    
    s = (struct student*) malloc(n* sizeof(struct student));
    temp = s;
    for(int i =0; i<n ; i++){
        printf("Enter student details\n");
        scanf("%s", temp->name);
        scanf("%d", &temp->rollno);
        scanf("%s", temp->place);
        temp->total = 0;
        for(int j =0; j< 6 ; j++){
            scanf("%d", &temp->marks[j]);
            temp->total = temp->total + temp->marks[j];
        }
        temp->percentage = (float)temp->total/6;
        temp++;
    }
    
    printf("The student details are\n");
    temp = s;
    for(int i =0; i<n ; i++){
        printf("%s\t", temp->name);
        printf("%d\t", temp->rollno);
        printf("%s\t", temp->place);
        for(int j =0; j< 6 ; j++){
            printf("%d\t", temp->marks[j]);
        }
        printf("%d\t", temp->total);
        printf("%0.2f",temp->percentage);
        printf("\n");
        temp++;
    }
    return 0;
}

/*
int main()
{
    struct student *s = NULL;
    s = (struct student*) malloc(sizeof(struct student));
    
    printf("Enter student details\n");
    scanf("%s", s->name);
    scanf("%d", &s->rollno);
    scanf("%s", s->place);
    s->total = 0;
    for(int j =0; j< 6 ; j++){
        scanf("%d", &s->marks[j]);
        s->total = s->total + s->marks[j];
    }
    s->percentage = (float)s->total/6;
    
    
    printf("The student details are\n");

    printf("%s\t", s->name);
    printf("%d\t", s->rollno);
    printf("%s\t", s->place);
    for(int j =0; j< 6 ; j++){
        printf("%d\t", s->marks[j]);
    }
    printf("%d\t", s->total);
    printf("%0.2f",s->percentage);
    printf("\n");
    return 0;
}
*/
