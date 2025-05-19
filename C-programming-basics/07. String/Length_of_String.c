#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a setence: ");
    scanf("%s", str); // Read until space
    // scanf("%[^\n]", str); // Read until newline 

    // int count = 0;
    // for (int i = 0; str[i] != '\0'; i++) {  // \0 = null character
    //     count++;
    // }
    // printf("Length of string: %d\n", count);

    int string_length = strlen(str); // Call the function to calculate length
    printf("Length of string: %d\n", string_length); // Print the length of the string
    return 0;
}