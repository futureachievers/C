
#include <stdio.h>
/*
Array
Collection of Homogeneous elements
Array index starts with 0 and ends with n-1
*/

int main()
{
    int arr[100]; // 0 1 2 3 4 //arr[0], arr[1], arr[2], arr[3],arr[4]
    
    int n;
    printf("Enter how many  numbers you have\n");
    scanf("%d", &n);
    printf("Enter %d numbers\n", n);
    
    for (int i = 0; i< n; i++)
        scanf("%d", &arr[i]);
    
    int sum = 0;
    for (int i = 0; i< n; i++){
        printf("%d ", arr[i]);
        sum = sum+ arr[i];
    }
    printf("\nsum = %d\n", sum);
    printf("avg = %f\n", (float)sum/n);
        
        

    return 0;
}


/*
int main()
{
    int arr[100]; // 0 1 2 3 4 //arr[0], arr[1], arr[2], arr[3],arr[4]
    
    
    printf("Enter 100 numbers");
    //scanf("%d %d %d %d %d", &arr[0],&arr[1],&arr[2],&arr[3],&arr[4] );
   for (int i = 0; i< 100; i++)
        scanf("%d", &arr[i]);

    //printf("%d %d %d %d %d", arr[0],arr[1],arr[2],arr[3],arr[4] );
      for (int i = 0; i< 100; i++)
        printf("%d ", arr[i]);

    return 0;
}
*/

