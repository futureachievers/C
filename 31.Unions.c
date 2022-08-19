
#include <stdio.h>
/*
union union_name{
    members
};
*/

union data{
    int idata;
    float fdata;
    char name[20];
};
struct sdata{
    int idata;
    float fdata;
    char name[20];
};

union serial{
    int idata;
    float fdata;
    char cdata[4];
};

#define INT 1 
#define FLOAT 2 
#define CHAR 3 

int main()
{
    union data d;
    //struct sdata s;
    //printf("Size of union is %ld\n", sizeof(d));
    //printf("Size of struct is %ld\n", sizeof(s));
    union serial s;
    int type;
    printf("Enter the type of data that you have 1.INT 2.FLOAT 3.CHAR\n");
    scanf("%d", &type);
    
    if(type == INT){
        scanf("%d", &s.idata);
        printf("The data in union is %d", s.idata);
    }else if(type == FLOAT){
        scanf("%f", &s.fdata);
        printf("The data in union is %f", s.fdata);
    }else if(type == CHAR){
        scanf("%s", s.cdata);
        printf("The data in union is %s", s.cdata);
    }else {
        printf("Invalid type to store in union");
    }

    return 0;
}

