#include <stdio.h>
#include <string.h>

int main() {
    char str_1[100], str_2[100];
    printf("Enter first string: ");
    scanf("%[^\n]", str_1); // Read first string

    getchar(); // consume leftover newline

    printf("Enter second string: ");
    scanf("%[^\n]", str_2); // Read second string

    // int i = 0;
    // // Compare the strings lexicographically
    // while (1) { // Infinite loop
    //     if (str_1[i] == '\0' && str_2[i] == '\0') { // Both strings end
    //         printf("Both strings are equal.\n");
    //         break;
    //     } else if (str_1[i] == '\0') { // First string ends, second string continues
    //         printf("First string is less than second string.\n");
    //         break;
    //     } else if (str_2[i] == '\0') { // Second string ends, first string continues
    //         printf("First string is greater than second string.\n");
    //         break;
    //     } else if (str_1[i] < str_2[i]) { // First character is less than second character
    //         printf("First string is less than second string.\n");
    //         break; 
    //     } else if (str_1[i] > str_2[i]) { // First character is greater than second character
    //         printf("First string is greater than second string.\n");
    //         break;
    //     }
    //     str_1[i]++; // Move to the next character in the first string
    //     str_2[i]++; // Move to the next character in the second string
    // }

    // strcmp(str_1, str_2); // Compare the strings using strcmp function  

    // printf("%d\n", strcmp(str_1, str_2));

    if (strcmp(str_1, str_2) == 0) {
        printf("Both strings are equal.\n");
    } else if (strcmp(str_1, str_2) < 0) {
        printf("First string is less than second string.\n");
    } else {
        printf("First string is greater than second string.\n");
    }

    return 0;
}