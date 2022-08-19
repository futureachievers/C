#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **a , **b, **c; // &a[i] =a+i, a[i] = *(a+i) , a[i][j] =  *(*(a+i)+j),  &a[i][j] = *(a+i)+j
    int rows, cols;
    printf("Enter rows and cols\n");
    scanf("%d %d", &rows, &cols);
    
    a = malloc(rows* sizeof(int *)); // we created rows number of pointers
    b = malloc(rows* sizeof(int *));
    c = malloc(rows* sizeof(int *));
    for(int i =0 ; i< rows ; i++){
        *(a+i) = malloc(cols* sizeof(int)); // we created memory for cols number of integers
        *(b+i) = malloc(cols* sizeof(int));
        *(c+i) = malloc(cols* sizeof(int));
    }
    printf("Enter %d numbers for matrix A\n", rows *cols);
    for(int i =0 ; i< rows ; i++){
        for(int j=0; j<cols; j++){
            scanf("%d", *(a+i)+j ); // &a[i][j]
        }
    }
    
    printf("Enter %d numbers for matrix B\n", rows *cols);
    for(int i =0 ; i< rows ; i++){
        for(int j=0; j<cols; j++){
            scanf("%d", *(b+i)+j ); 
        }
    }
    //Matrix Sum
    for(int i =0 ; i< rows ; i++){
        for(int j=0; j<cols; j++){
            *(*(c+i)+j) = *(*(a+i)+j) + *(*(b+i)+j) ;     
        }
    }
    
    printf("The matrix A is\n");
    for(int i =0 ; i< rows ; i++){
        for(int j=0; j<cols; j++){
            printf("%d ", *(*(a+i)+j) ); // a[i][j]
        }
        printf("\n");
    }
    
   printf("The matrix B is\n");
    for(int i =0 ; i< rows ; i++){
        for(int j=0; j<cols; j++){
            printf("%d ", *(*(b+i)+j) ); // b[i][j]
        }
        printf("\n");
    }    
    
   printf("The matrix C is \n");
    for(int i =0 ; i< rows ; i++){
        for(int j=0; j<cols; j++){
            printf("%d ", *(*(c+i)+j) ); // c[i][j]
        }
        printf("\n");
    }

    return 0;
}

