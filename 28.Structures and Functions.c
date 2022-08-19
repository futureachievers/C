#include <stdio.h>
struct person{
    char name[20];
    int age;
};

struct person get_person_details();
void print_person_details(struct person *p, int n);

int main()
{
    struct person s[100];
    int n;
    printf("Enter how many persons you have\n");
    scanf("%d", &n);
    for(int i =0; i< n; i++)
        s[i]= get_person_details();
    print_person_details(s,n);

    return 0;
}
struct person get_person_details(){
    struct person p;
    printf("Enter person details\n");
    scanf("%s %d", p.name,&p.age);
    return p;
}
void print_person_details(struct person *p, int n){
    printf("The person details are\n");
    for(int i = 0; i< n; i++){
        printf("Name=%s Age=%d\n",p->name, p->age );
        p++;
    }
}

/*
struct person get_person_details();
void print_person_details(struct person s[], int n);

int main()
{
    struct person s[100];
    int n;
    printf("Enter how many persons you have\n");
    scanf("%d", &n);
    for(int i =0; i< n; i++)
        s[i]= get_person_details();
    print_person_details(s,n);

    return 0;
}
struct person get_person_details(){
    struct person p;
    printf("Enter person details\n");
    scanf("%s %d", p.name,&p.age);
    return p;
}
void print_person_details(struct person p[], int n){
    printf("The person details are\n");
    for(int i = 0; i< n; i++)
        printf("Name=%s Age=%d\n",p[i].name, p[i].age );
}
*/

/*
struct person get_person_details();
void print_person_details(struct person);

int main()
{
    struct person s;
    s= get_person_details();
    print_person_details(s);

    return 0;
}
struct person get_person_details(){
    struct person p;
    printf("Enter person details\n");
    scanf("%s %d", p.name,&p.age);
    return p;
}
void print_person_details(struct person p){
    printf("The person details are\n");
    printf("Name=%s Age=%d",p.name, p.age );
}
*/


