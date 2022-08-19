
#include <stdio.h>

int main()
{
    int arr[5]; // array name itself is address of first element
    int *ptr = NULL;
    
    ptr = arr;
    printf("Enter 5 numbers ");
    for(int i =0; i< 5 ; i++){
        scanf("%d", ptr+i ); // scanf("%d", &arr[i]); //ptr[i]
    }
    for (int i =0 ; i< 5 ; i++){
        //printf("%d@%x-%x ", *(ptr+i), ptr+i, &arr[i]); //printf("%d ", arr[i]);
        printf("%d ",*(ptr+i) );
        
    }
    printf("\nPrinting using pointer arthmatic\n");
    ptr = arr;
    for (int i =0 ; i< 5 ; i++){
        
        printf("%d ",*ptr++ );
    
    }
    
    return 0;
}

