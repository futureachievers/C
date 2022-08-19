
#include <stdio.h>
/*
Character Arrays
Collecton or group of characters

Strings
Group of characters 
Terminated with '\0'
String index starts with 0 and ends with n-1
*/
#include <string.h>
int main()
{
    
    char name[30]; // name = &name[0]
    printf("Enter a name\n");
    scanf("%s", name); // No need to specify & operator because array name itself is address.
    printf("%s is the name\n", name);
    //strlen, strcpy, strcat, strchr, strrchr - string.h header file.
    int len =0;
    for(int i =0 ;name[i] != '\0' ; i++){
        len++;
    }
    printf("%d is the length of %s- strlen result %ld\n", len, name, strlen(name));
/*   
    char mobile[10];
    printf("Enter mobile number\n");
    for (int i =0; i< 10; i++){
        scanf("%c", &mobile[i]);
    }
    
    for (int i =0; i< 10; i++){
        printf("%c", mobile[i]);
    }
*/
    
    return 0;
}


