
#include <stdio.h>
/*
malloc() - initializes with garbage values
ptr = (int*) malloc(100 * sizeof(int));

calloc() - initializes with zero.
ptr = (float*) calloc(25, sizeof(float));

free()
free(ptr);

realloc()
ptr = realloc(ptr, newSize);
*/
#include <stdlib.h>
int main()
{
    int *ptr = NULL;
    int n;
    printf("Enter how many numbers you have\n");
    scanf("%d", &n);
    ptr =  (int*) malloc(n * sizeof(int));
    
    if(ptr == NULL){
        printf("Unable to allocate memory\n");
        return -1;
    }
    printf("Enter %d numbers\n", n);
    for(int i = 0 ; i < n ; i++){
        scanf("%d", ptr+i);
    }
    int max = 0;
    for(int i = 0 ; i < n ; i++){
        printf("%d ", *(ptr+i));
        if (max < *(ptr+i)){
            max = *(ptr+i);
        }
    }  
    printf("max = %d", max);
    
    if(ptr != NULL)
        free(ptr);
    
    return 0;

}

/*
https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/
*/
