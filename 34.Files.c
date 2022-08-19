
#include <stdio.h>
#include <stdlib.h>
/*
FILE *  - file pointer

FILE *fptr;

fopen
open a file
FILE * fopen(const char *, const char *);
"input.txt" 

r -read 
w- write
a-append
r+ - read and write
w+  -write and read
a+ - write and read with append

rb - binary file read
wb - binary file write
ab- binary file append
rb+, wb+, ab+ 

FILE *fptr;
fptr = fopen("input.txt", "r");


fgetc, fgets, fscanf
read from file
int      fgetc(FILE *);
char    *fgets(char *, int, FILE *);

int ch;
ch = fgetc(fptr);


fputc, fputs, fprintf
write to file

int      fprintf(FILE *, const char *, ...);
int      fputc(int, FILE *);
int      fputs(const char *, FILE *);

fputc(ch,fptr2);

fclose
close a file
int      fclose(FILE *);
fclose(fptr);


fseek 
bring fptr to certain position
int      fseek(FILE *, long int, int);

rewind
bring to start position
void rewind(FILE *)
*/

int main()
{
    char name[20];
    char place[20];
    int age;
    float percentage;
    

    
    FILE *student_file = NULL;
    student_file = fopen("students.txt", "a+");
    int data_exists = 0;
    int ch;
    while((ch = fgetc(student_file)) != EOF){
       data_exists = 1;
       break;
    }
    
    if(data_exists == 0)
        fprintf(student_file, "Name\tPlace\tage\tpercentage\n");
    

    
    int n;
    printf("Enter how many students data you have\n");
    scanf("%d", &n);
    for(int i = 0 ; i< n ; i++){
        printf("Enter student details");
        scanf("%s", name);
        scanf("%s", place);
        scanf("%d", &age);
        scanf("%f", &percentage);
        fprintf(student_file, "%s %s %d %f\n", name, place, age, percentage );
    }
    
    printf("Data copied to students.txt successfully");
        
    fclose(student_file);
    return 0;
}

/*
int main()
{
    //char name[20];
    //printf("Enter a name\n");
    //scanf("%s", name);
    
    FILE *input_file = NULL, *output_file = NULL;
    
    input_file = fopen("input.txt", "r");
    output_file = fopen("output.txt","a+" );

    
    if(input_file == NULL || output_file == NULL){
        printf("unable to open files\n");
        return 0;
    }
    
    // File Copy
    int ch;
    while((ch = fgetc(input_file)) != EOF){
        fputc(ch, output_file);
    }
   
    //Files Close
    fclose(input_file);
    fclose(output_file);
    
    return 0;
}*/


/*
//File Copy
int main()
{

    FILE *fptr, *fptr2;
    fptr = fopen("input.txt", "r");
    fptr2 = fopen("output.txt", "a");
    
    
    if(fptr == NULL || fptr2 == NULL){
        printf("Unable to open files\n");
        exit(1);
    }
    
    
    int ch;
    while(1){
        ch = fgetc(fptr);
        if(ch == EOF)
            break;
        fputc(ch,fptr2);  // to print to file.
        //printf("%c", ch); to print in std out
     }
     
     fclose(fptr);
     fclose(fptr2);
     printf("file copied successfuly\n");
    return 0;
}
*/

/*
//Collect Data and store it into a file.
#include <stdio.h>
int main()
{
    char name[20];
    int age;
    char place[20];
    FILE *student_file; 
        student_file = fopen("students.txt", "a+");
        if(student_file == NULL) {
            printf("Unable to open file\n");
            exit(1);        
    }


    char line[100];
    int lines = 0;
    
    while(fgets(line, 100, student_file) != NULL){
        lines = atoi(line);
    }


    int n;
    printf("Enter number of students\n");
    scanf("%d", &n);
    printf("Enter name age and place of the %d students\n", n);
    int i = 0;

    if(lines == 0){
        fprintf(student_file,"SNO\tName\tAge\tPlace\n");
    }
    
    while(i< n){
        scanf("%s %d %s", name, &age, place);
        fprintf(student_file,"%d\t%s\t%d\t%s\n",i+1+lines, name, age, place);
        i++;
    }
    
    fclose(student_file);    
    
    printf("Data is stored into file: students.txt\n");
}
*/
