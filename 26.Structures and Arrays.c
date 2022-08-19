
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
    struct student s[100];
    int n;
    printf("Enter how many students you have\n");
    scanf("%d", &n);
    for (int i =0; i< n; i++){
        printf("Enter student %d details\n", i+1);
        scanf("%s", s[i].name);
        scanf("%d", &s[i].rollno);
        scanf("%s", s[i].place);
        s[i].total = 0;
        for(int j =0; j< 6 ; j++){
            scanf("%d", &s[i].marks[j]);
            s[i].total = s[i].total + s[i].marks[j];
        }
        s[i].percentage = (float)s[i].total/6;
    }
    
    printf("The student details are\n");
    printf("Name\trollno\tplace\ttelugu\tenglish\tmaths\tscience\tsocial\thindi\ttotal\tpercentage\n");
    for (int i =0; i< n; i++){
        printf("%s\t", s[i].name);
        printf("%d\t", s[i].rollno);
        printf("%s\t", s[i].place);
        for(int j =0; j< 6 ; j++){
            printf("%d\t", s[i].marks[j]);
        }
        printf("%d\t", s[i].total);
        printf("%0.2f",s[i].percentage);
        printf("\n");
    }
    return 0;
}

