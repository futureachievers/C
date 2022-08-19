
#include <stdio.h>
/*
int main()
{
    char names[5][20];
    printf("Enter 5 names\n");
    for(int i = 0; i< 5; i++){
        scanf("%s", names[i]);
    }
    
    for(int i =0 ;i < 5; i++){
        printf("%s\n", names[i]);
    }
}
*/

int main()
{
   int a[10][10], b[10][10], c[10][10];
   int rows, cols;
   printf("Enter rows and columns\n");
   scanf("%d %d", &rows, &cols);
   
   printf("Enter %d numbers for matrix A\n", rows * cols);
   
   for(int i =0 ;i < rows ; i++){
       for(int j=0; j < cols ; j++){
           scanf("%d", &a[i][j]);
       }
   }
   
   printf("Enter %d numbers for matrix B\n", rows * cols);
   
   for(int i =0 ;i < rows ; i++){
       for(int j=0; j < cols ; j++){
           scanf("%d", &b[i][j]);
       }
   }
   printf("The %d numbers represented in matrix A \n", rows * cols);
   for(int i =0 ;i < rows ; i++){
       for(int j=0; j < cols ; j++){
           printf("%d ", a[i][j]);
       }
        printf("\n");
   }
   printf("The %d numbers represented in matrix B \n", rows * cols);
   for(int i =0 ;i < rows ; i++){
       for(int j=0; j < cols ; j++){
           printf("%d ", b[i][j]);
       }
        printf("\n");
   }

   printf("The %d numbers represented in matrix A+B \n", rows * cols);
   for(int i =0 ;i < rows ; i++){
       for(int j=0; j < cols ; j++){
           c[i][j] = a[i][j]+ b[i][j];
           printf("%d ", c[i][j]);
       }
        printf("\n");
   }
    
    return 0;
}


