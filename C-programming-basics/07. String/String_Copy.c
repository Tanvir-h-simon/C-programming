#include <stdio.h>
#include <string.h>

int main() {
    char str_1[100], str_2[100];

    // printf("Enter first string: ");
    // scanf("%[^\n]", str_1); // Read first string
    
    // int length_str_1 = strlen(str_1); // Call the function to calculate length
    // for (int i = 0; i <= length_str_1; i++) {
    //     str_2[i] = str_1[i]; // Copy each character from str_1 to str_2
    // }   
    // printf("Copied string: %s\n", str_2);

    printf("Enter first string: ");
    scanf("%[^\n]", str_1); // Read first string
    
    strcpy(str_2, str_1); // Copy str_1 to str_2 using strcpy (String Copy) function  
    printf("Copied string: %s\n", str_2);
    return 0;
}